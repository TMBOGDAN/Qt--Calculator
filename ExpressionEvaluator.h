#ifndef EXPRESSIONEVALUATOR_H
#define EXPRESSIONEVALUATOR_H

#include <string>
#include <vector>
#include <stack>
#include <cctype>
#include <stdexcept>

class ExpressionEvaluator {
public:
    double evaluate(const std::string& expr) {
        auto tokens = tokenize(expr);
        auto postfix = toPostfix(tokens);
        return evalPostfix(postfix);
    }

private:
    std::vector<std::string> tokenize(const std::string& expr);
    std::vector<std::string> toPostfix(const std::vector<std::string>& tokens);
    double evalPostfix(const std::vector<std::string>& postfix);
};


#endif // EXPRESSIONEVALUATOR_H
