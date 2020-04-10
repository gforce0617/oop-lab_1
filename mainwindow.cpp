#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include <QString>
#include "cmath"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this); 
    ui->spinBox->setMaximum(7);
    ui->spinBox->setMinimum(0);
    ui->verticalSlider_0->setMaximum(10);
    ui->verticalSlider_1->setMaximum(10);
    ui->verticalSlider_2->setMaximum(10);
    ui->verticalSlider_3->setMaximum(10);
    ui->verticalSlider_4->setMaximum(10);
    ui->verticalSlider_5->setMaximum(10);
    ui->verticalSlider_6->setMaximum(10);
    ui->verticalSlider_7->setMaximum(10);

    connect(ui->verticalSlider_0,SIGNAL(valueChanged(int)),ui->lcdNumber_0,SLOT(display(int)));
    connect(ui->verticalSlider_1,SIGNAL(valueChanged(int)),ui->lcdNumber_1,SLOT(display(int)));
    connect(ui->verticalSlider_2,SIGNAL(valueChanged(int)),ui->lcdNumber_2,SLOT(display(int)));
    connect(ui->verticalSlider_3,SIGNAL(valueChanged(int)),ui->lcdNumber_3,SLOT(display(int)));
    connect(ui->verticalSlider_4,SIGNAL(valueChanged(int)),ui->lcdNumber_4,SLOT(display(int)));
    connect(ui->verticalSlider_5,SIGNAL(valueChanged(int)),ui->lcdNumber_5,SLOT(display(int)));
    connect(ui->verticalSlider_6,SIGNAL(valueChanged(int)),ui->lcdNumber_6,SLOT(display(int)));
    connect(ui->verticalSlider_7,SIGNAL(valueChanged(int)),ui->lcdNumber_7,SLOT(display(int)));
}


MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::spinbox_value()
{
    return ui->spinBox->value();
}




void MainWindow::lcdNumber_setChange()
{
    ui->lcdNumber0->display(0);
    ui->lcdNumber1->display(0);
    ui->lcdNumber2->display(0);
    ui->lcdNumber3->display(0);
    ui->lcdNumber4->display(0);
    ui->lcdNumber5->display(0);
    ui->lcdNumber6->display(0);
    ui->lcdNumber7->display(0);

    switch(spin_value)
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

void MainWindow::cpy_lcdSlider_value()
{
    int i;
    slyder_value[0]=ui->verticalSlider_0->value();
    slyder_value[1]=ui->verticalSlider_1->value();
    slyder_value[2]=ui->verticalSlider_2->value();
    slyder_value[3]=ui->verticalSlider_3->value();
    slyder_value[4]=ui->verticalSlider_4->value();
    slyder_value[5]=ui->verticalSlider_5->value();
    slyder_value[6]=ui->verticalSlider_6->value();
    slyder_value[7]=ui->verticalSlider_7->value();

    for(i=7;i>spin_value;i--)
    {
        slyder_value[i]=0;
    }
    on_textBrowser_textChanged();
}









void MainWindow::on_slider_button_clicked()
{
    cpy_lcdSlider_value();
}

void MainWindow::on_setchange_clicked()
{
    spin_value=ui->spinBox->value();
    lcdNumber_setChange();
}

void MainWindow::on_textBrowser_textChanged()
{
    int fun=0;
    QString f;
    for(int i=0;i<=spin_value;i++)
        fun+=pow(slyder_value[i],i);
    f=QString("%1^0+%2^1+%3^2+%4^3+%5^4+%6^5+%7^6+%8^7=%9").arg(slyder_value[0]).arg(slyder_value[1]).arg(slyder_value[2]).
            arg(slyder_value[3]).arg(slyder_value[4]).arg(slyder_value[5]).arg(slyder_value[6]).arg(slyder_value[7]).arg(fun);
    std::cout<<f.toStdString()<<std::endl;
    ui->textBrowser->setText(f);
}
