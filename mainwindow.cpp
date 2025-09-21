#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"
#include "ExpressionEvaluator.h"
#include <QIcon>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{


setFixedSize(349, 365);
    ui->setupUi(this);
    connect(ui->pb0,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb1,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb2,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb3,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb4,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb5,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb6,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb7,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb8,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb9,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb_plus,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb_minus,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb_divided,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb_mod,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb_multiply,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb_dot,SIGNAL(released()),this,SLOT(print_character()));
    connect(ui->pb_erase,SIGNAL(released()),this,SLOT(erase_character()));
    connect(ui->pb_clear,SIGNAL(released()),this ,SLOT(on_pb_clear_clicked()));
    connect(ui->pb_lbreaket, SIGNAL(released()), this, SLOT(print_character()));
    connect(ui->pb_rbreaket, SIGNAL(released()), this, SLOT(print_character()));
    connect (ui->pb_eq,SIGNAL (clicked()) , this, SLOT (on_pb_eq_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::print_character()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button) {
        return;
    }

    // Get the current text directly from the label
    if (ui->calc_label->text() == "0") {
        // If it's the initial "0", replace it
        ui->calc_label->setText(button->text());
    } else {
        // Otherwise, concatenate
        ui->calc_label->setText(ui->calc_label->text() + button->text());
    }
}

void MainWindow::erase_character()
{
    QString curent_text=ui->calc_label->text();
    curent_text.chop(1);
    ui->calc_label->setText(curent_text);

}





void MainWindow::on_pb_clear_clicked()
{

    ui->calc_label->setText("0");
}




void MainWindow::on_pb_eq_clicked()
{
    QString expr = ui->calc_label->text();
    ExpressionEvaluator evaluator;
    try {
        double result = evaluator.evaluate(expr.toStdString());
        ui->calc_label->setText(QString::number(result));
    } catch (const std::exception& e) {
        ui->calc_label->setText("Error");
        qDebug() << "Evaluation error:" << e.what();
    }


}
