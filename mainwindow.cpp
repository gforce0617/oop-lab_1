#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"


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

int MainWindow::spinbox_value()
{
    return ui->spinBox->value();
}




void MainWindow::lcdNumber_setChange(int value)
{
    switch(value)
    {
        case 0:
        {
            ui->lcdNumber0->display(0);
            break;
        }
        case 1:
        {
            ui->lcdNumber0->display(0);
            ui->lcdNumber1->display(1);\
            break;
        }
        case 2:
        {
            ui->lcdNumber0->display(0);
            ui->lcdNumber1->display(1);
            ui->lcdNumber2->display(2);
            break;
        }
        case 3:
        {
            ui->lcdNumber0->display(0);
            ui->lcdNumber1->display(1);
            ui->lcdNumber2->display(2);
            ui->lcdNumber3->display(3);
            break;
        }
        case 4:
        {
            ui->lcdNumber0->display(0);
            ui->lcdNumber1->display(1);
            ui->lcdNumber2->display(2);
            ui->lcdNumber3->display(3);
            ui->lcdNumber4->display(4);
            break;
        }
        case 5:
        {
            ui->lcdNumber0->display(0);
            ui->lcdNumber1->display(1);
            ui->lcdNumber2->display(2);
            ui->lcdNumber3->display(3);
            ui->lcdNumber4->display(4);
            ui->lcdNumber5->display(5);
            break;
        }
        case 6:
        {
            ui->lcdNumber0->display(0);
            ui->lcdNumber1->display(1);
            ui->lcdNumber2->display(2);
            ui->lcdNumber3->display(3);
            ui->lcdNumber4->display(4);
            ui->lcdNumber5->display(5);
            ui->lcdNumber6->display(6);
            break;
        }
        case 7:
        {
            ui->lcdNumber0->display(0);
            ui->lcdNumber1->display(1);
            ui->lcdNumber2->display(2);
            ui->lcdNumber3->display(3);
            ui->lcdNumber4->display(4);
            ui->lcdNumber5->display(5);
            ui->lcdNumber6->display(6);
            ui->lcdNumber7->display(7);
            break;
        }
        default:
        {
            break;
        }
    }
}






