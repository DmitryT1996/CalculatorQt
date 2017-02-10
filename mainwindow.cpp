#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    ui->lineEdit->setText(ui->lineEdit->text()+"0");
}
