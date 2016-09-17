#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QStyle>
#include <QDesktopWidget>
#include "iqlineedit.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_lineEdit_returnPressed();
    void on_lineEdit_escapePressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
