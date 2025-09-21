#include "ExpressionEvaluator.h"
#include <cmath>
#include <cctype>
#include <stdexcept>

std::vector<std::string> ExpressionEvaluator::tokenize(const std::string& expr) {
    std::vector<std::string> tokens;
    std::string number;

    for (char c : expr) {
        if (std::isspace(c)) continue; // ignore spaces

        if (std::isdigit(c) || c == '.') {
            number.push_back(c);
        } else {
            if (!number.empty()) {
                tokens.push_back(number);
                number.clear();
            }

            // Treat 'x' or 'X' as multiplication
            if (c == 'x' || c == 'X') {
                tokens.push_back("*");
            } else {
                tokens.push_back(std::string(1, c));
            }
        }
    }

    if (!number.empty()) tokens.push_back(number);
    return tokens;
}

std::vector<std::string> ExpressionEvaluator::toPostfix(const std::vector<std::string>& tokens) {
    std::vector<std::string> output;
    std::stack<std::string> opStack;

    auto precedence = [](const std::string& op) {
        if (op == "+" || op == "-") return 1;
        if (op == "*" || op == "/" || op == "%") return 2;
        return 0;
    };

    auto isOperator = [](const std::string& token) {
        return token == "+" || token == "-" || token == "*" || token == "/" || token == "%";
    };

    for (const auto& token : tokens) {
        if (isOperator(token)) {
            while (!opStack.empty() && precedence(opStack.top()) >= precedence(token)) {
                output.push_back(opStack.top());
                opStack.pop();
            }
            opStack.push(token);
        } else if (token == "(") {
            opStack.push(token);
        } else if (token == ")") {
            while (!opStack.empty() && opStack.top() != "(") {
                output.push_back(opStack.top());
                opStack.pop();
            }
            if (!opStack.empty()) opStack.pop();
        } else {
            // Basic validation: check if token is a number
            try {
                std::stod(token);
            } catch (...) {
                throw std::runtime_error("Invalid token: " + token);
            }
            output.push_back(token);
        }
    }

    while (!opStack.empty()) {
        output.push_back(opStack.top());
        opStack.pop();
    }
    return output;
}

double ExpressionEvaluator::evalPostfix(const std::vector<std::string>& postfix) {
    std::stack<double> st;

    auto isOperator = [](const std::string& token) {
        return token == "+" || token == "-" || token == "*" || token == "/" || token == "%";
    };

    for (const auto& token : postfix) {
        if (isOperator(token)) {
            if (st.size() < 2) throw std::runtime_error("Invalid expression");
            double b = st.top(); st.pop();
            double a = st.top(); st.pop();

            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") st.push(a / b);
            else if (token == "%") st.push(fmod(a, b));
        } else {
            st.push(std::stod(token));
        }
    }

    if (st.empty()) throw std::runtime_error("Empty expression");
    return st.top();
}
