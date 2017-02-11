#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
bool plus;
bool minus;
bool mult;
bool delen;
double a, b;

void MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
}

void MainWindow::on_pushButton_0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
}

void MainWindow::on_pushButton_C_clicked()
{
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+".");
}

void MainWindow::on_pushButton_plus_clicked()
{
    a = ui->lineEdit->text().toDouble();
    plus = true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_minus_clicked()
{
    a = ui->lineEdit->text().toDouble();
    minus = true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_umn_clicked()
{
    a = ui->lineEdit->text().toDouble();
    mult = true;
    ui->lineEdit->setText("");
}

void MainWindow::on_pushButton_delenie_clicked()
{
    a = ui->lineEdit->text().toDouble();
    delen = true;
    ui->lineEdit->setText("");
}
void MainWindow::on_pushButton_rez_clicked()
{
    b = ui->lineEdit->text().toDouble();
    if(plus == true)
        ui->lineEdit->setText(QString::number(a+b));
    else if(minus == true)
        ui->lineEdit->setText(QString::number(a-b));
    else if(mult == true)
        ui->lineEdit->setText(QString::number(a*b));
    else
        ui->lineEdit->setText(QString::number(a/b));
    plus = minus = mult = delen = false;
}
