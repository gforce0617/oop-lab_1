#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int spinbox_value();

private slots:








    void on_slider_button_clicked();
    void lcdNumber_setChange();
    void cpy_lcdSlider_value();
    void on_setchange_clicked();


private:
    Ui::MainWindow *ui;
    int spin_value;
    int slyder_value[8];
};

#endif // MAINWINDOW_H
