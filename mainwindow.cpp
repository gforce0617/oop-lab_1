#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"


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

void MainWindow::lcdSlider_setChange()
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

    for(i=0;i<=spin_value;i++)
    {
        std::cout<<slyder_value[i]<<std::endl;
    }
    ui->lcdNumber0->display(3);
    ui->lcdNumber_0->display(5);
    ui->lcdNumber_1->display(slyder_value[1]);
    ui->lcdNumber_2->display(slyder_value[2]);
    ui->lcdNumber_3->display(slyder_value[3]);
    ui->lcdNumber_4->display(slyder_value[4]);
    ui->lcdNumber_5->display(slyder_value[5]);
    ui->lcdNumber_6->display(slyder_value[6]);
    ui->lcdNumber_7->display(slyder_value[7]);

}









void MainWindow::on_slider_button_clicked()
{
    lcdSlider_setChange();
}

void MainWindow::on_setchange_clicked()
{
    spin_value=ui->spinBox->value();
    lcdNumber_setChange();
}
