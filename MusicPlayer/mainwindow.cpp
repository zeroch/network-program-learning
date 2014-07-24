#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    playButton = new QPushButton(this);
    playButton->setText(QString("Play Music"));
//    connect(playButton,SIGNAL(clicked()),player,SLOT(play()));

}

MainWindow::~MainWindow()
{
    delete playButton;
}
