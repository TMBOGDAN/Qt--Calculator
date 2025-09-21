/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pb7;
    QPushButton *pb5;
    QPushButton *pb_plus;
    QPushButton *pb_divided;
    QPushButton *pb8;
    QPushButton *pb3;
    QPushButton *pb_multiply;
    QPushButton *pb2;
    QPushButton *pb_dot;
    QPushButton *pb6;
    QPushButton *pb_minus;
    QPushButton *pb_rbreaket;
    QPushButton *pb0;
    QPushButton *pb4;
    QPushButton *pb_eq;
    QPushButton *pb_lbreaket;
    QPushButton *pb9;
    QPushButton *pb_erase;
    QPushButton *pb_clear;
    QPushButton *pb1;
    QPushButton *pb_mod;
    QLabel *calc_label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(347, 363);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 10, 346, 351));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pb7 = new QPushButton(widget);
        pb7->setObjectName("pb7");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb7->sizePolicy().hasHeightForWidth());
        pb7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb7, 4, 0, 1, 1);

        pb5 = new QPushButton(widget);
        pb5->setObjectName("pb5");
        sizePolicy.setHeightForWidth(pb5->sizePolicy().hasHeightForWidth());
        pb5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb5, 5, 1, 1, 1);

        pb_plus = new QPushButton(widget);
        pb_plus->setObjectName("pb_plus");
        sizePolicy.setHeightForWidth(pb_plus->sizePolicy().hasHeightForWidth());
        pb_plus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_plus, 6, 3, 1, 1);

        pb_divided = new QPushButton(widget);
        pb_divided->setObjectName("pb_divided");
        sizePolicy.setHeightForWidth(pb_divided->sizePolicy().hasHeightForWidth());
        pb_divided->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_divided, 4, 3, 1, 1);

        pb8 = new QPushButton(widget);
        pb8->setObjectName("pb8");
        sizePolicy.setHeightForWidth(pb8->sizePolicy().hasHeightForWidth());
        pb8->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb8, 4, 1, 1, 1);

        pb3 = new QPushButton(widget);
        pb3->setObjectName("pb3");
        sizePolicy.setHeightForWidth(pb3->sizePolicy().hasHeightForWidth());
        pb3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb3, 6, 2, 1, 1);

        pb_multiply = new QPushButton(widget);
        pb_multiply->setObjectName("pb_multiply");
        sizePolicy.setHeightForWidth(pb_multiply->sizePolicy().hasHeightForWidth());
        pb_multiply->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_multiply, 3, 3, 1, 1);

        pb2 = new QPushButton(widget);
        pb2->setObjectName("pb2");
        sizePolicy.setHeightForWidth(pb2->sizePolicy().hasHeightForWidth());
        pb2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb2, 6, 1, 1, 1);

        pb_dot = new QPushButton(widget);
        pb_dot->setObjectName("pb_dot");
        sizePolicy.setHeightForWidth(pb_dot->sizePolicy().hasHeightForWidth());
        pb_dot->setSizePolicy(sizePolicy);
        pb_dot->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(pb_dot, 7, 2, 1, 1);

        pb6 = new QPushButton(widget);
        pb6->setObjectName("pb6");
        sizePolicy.setHeightForWidth(pb6->sizePolicy().hasHeightForWidth());
        pb6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb6, 5, 2, 1, 1);

        pb_minus = new QPushButton(widget);
        pb_minus->setObjectName("pb_minus");
        sizePolicy.setHeightForWidth(pb_minus->sizePolicy().hasHeightForWidth());
        pb_minus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_minus, 5, 3, 1, 1);

        pb_rbreaket = new QPushButton(widget);
        pb_rbreaket->setObjectName("pb_rbreaket");
        sizePolicy.setHeightForWidth(pb_rbreaket->sizePolicy().hasHeightForWidth());
        pb_rbreaket->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_rbreaket, 3, 1, 1, 1);

        pb0 = new QPushButton(widget);
        pb0->setObjectName("pb0");
        sizePolicy.setHeightForWidth(pb0->sizePolicy().hasHeightForWidth());
        pb0->setSizePolicy(sizePolicy);
        pb0->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(pb0, 7, 0, 1, 2);

        pb4 = new QPushButton(widget);
        pb4->setObjectName("pb4");
        sizePolicy.setHeightForWidth(pb4->sizePolicy().hasHeightForWidth());
        pb4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb4, 5, 0, 1, 1);

        pb_eq = new QPushButton(widget);
        pb_eq->setObjectName("pb_eq");
        sizePolicy.setHeightForWidth(pb_eq->sizePolicy().hasHeightForWidth());
        pb_eq->setSizePolicy(sizePolicy);
        pb_eq->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(pb_eq, 7, 3, 1, 1);

        pb_lbreaket = new QPushButton(widget);
        pb_lbreaket->setObjectName("pb_lbreaket");
        sizePolicy.setHeightForWidth(pb_lbreaket->sizePolicy().hasHeightForWidth());
        pb_lbreaket->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_lbreaket, 3, 0, 1, 1);

        pb9 = new QPushButton(widget);
        pb9->setObjectName("pb9");
        sizePolicy.setHeightForWidth(pb9->sizePolicy().hasHeightForWidth());
        pb9->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb9, 4, 2, 1, 1);

        pb_erase = new QPushButton(widget);
        pb_erase->setObjectName("pb_erase");
        sizePolicy.setHeightForWidth(pb_erase->sizePolicy().hasHeightForWidth());
        pb_erase->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_erase, 2, 2, 1, 2);

        pb_clear = new QPushButton(widget);
        pb_clear->setObjectName("pb_clear");
        sizePolicy.setHeightForWidth(pb_clear->sizePolicy().hasHeightForWidth());
        pb_clear->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_clear, 2, 0, 1, 2);

        pb1 = new QPushButton(widget);
        pb1->setObjectName("pb1");
        sizePolicy.setHeightForWidth(pb1->sizePolicy().hasHeightForWidth());
        pb1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb1, 6, 0, 1, 1);

        pb_mod = new QPushButton(widget);
        pb_mod->setObjectName("pb_mod");
        sizePolicy.setHeightForWidth(pb_mod->sizePolicy().hasHeightForWidth());
        pb_mod->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pb_mod, 3, 2, 1, 1);

        calc_label = new QLabel(widget);
        calc_label->setObjectName("calc_label");
        sizePolicy.setHeightForWidth(calc_label->sizePolicy().hasHeightForWidth());
        calc_label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        calc_label->setFont(font);
        calc_label->setStyleSheet(QString::fromUtf8("border: 3px solid white;\n"
""));
        calc_label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(calc_label, 0, 0, 2, 4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        pb7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pb5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pb_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pb_divided->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pb8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pb3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pb_multiply->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pb2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pb_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pb6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pb_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pb_rbreaket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pb0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pb4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pb_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pb_lbreaket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pb9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pb_erase->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        pb_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pb1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pb_mod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
#if QT_CONFIG(accessibility)
        calc_label->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        calc_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
