#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QLabel>

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

void MainWindow::on_pushButton_clicked()
{
    QString input = ui->lineEdit->text();
    qDebug() << input;

    QLabel *label = new QLabel();
    label->setText(input);

    ui->verticalLayout->addWidget(label);

}

void MainWindow::on_pushButton_2_clicked()
{

}
