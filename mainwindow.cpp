#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QThread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_progressBar_valueChanged(int value)
{

}



void MainWindow::on_pushButton_clicked()
{
    int a;
    int b;
    b = 0;
    a = ui->progressBar->value();
    a++;
    if(a > 100){
        ui->label->setText("Мама кинпина лучшая в мире женщина!");
    }
    else{
        ui->progressBar->setValue(a);
        while(b < 30000000){
            b++;
        }
        on_pushButton_clicked();
    }

}

