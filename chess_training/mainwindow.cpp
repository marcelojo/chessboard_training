#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qchessboard.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QPalette palette = ui->frame_white->palette();
//    palette.setColor(backgroundRole(), QColor(255,255,255));
//    ui->frame_white->setPalette(palette);
//    ui->frame_white->setAutoFillBackground(true);

//    QPalette palette2 = ui->frame_black->palette();
//    palette2.setColor(backgroundRole(), QColor(0,0,0));
//    ui->frame_black->setPalette(palette2);
//    ui->frame_black->setAutoFillBackground(true);

    QChessBoard *chessboard = new QChessBoard(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
