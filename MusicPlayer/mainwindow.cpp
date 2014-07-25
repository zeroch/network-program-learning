#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    playButton = new QPushButton(this);
    playButton->setText(QString("Play Music"));
//    connect(playButton,SIGNAL(clicked()),player,SLOT(play()));
    QMediaPlayer *m_player = new QMediaPlayer();
    m_player->setMedia(QUrl::fromLocalFile("/home/zero/Music/gem.mp3"));
    connect(playButton,SIGNAL(clicked()),m_player,SLOT(play()));

}

MainWindow::~MainWindow()
{
    delete playButton;
}
