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
    void lcdNumber_setChange(int value);
private slots:











private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
