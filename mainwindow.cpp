#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->lineEdit, &IQLineEdit::escapePressed, this, &MainWindow::on_lineEdit_escapePressed);

    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight,
                                          Qt::AlignCenter,
                                          this->size()	 ,
                                          qApp->desktop()->availableGeometry()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_returnPressed()
{
    QProcess::startDetached("qutebrowser",QStringList(ui->lineEdit->text()));
    exit(0);
}

void MainWindow::on_lineEdit_escapePressed()
{
    exit(0);
}
