//
// Created by 13423 on 2022/8/13.
//

// You may need to build the project (run Qt uic code generator) to get "ui_selectWindow.h" resolved

#include "selectwindow.h"
#include "ui_selectWindow.h"
#include "Ui_selectwindow.h"

#include <QTimer>
#include <QPainter>
#include <QStyle>
#include <QStyleOption>

selectWindow::selectWindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::selectWindow) {

    ui->setupUi(this);
    this->showFullScreen();

    //修复Widget无法使用stylesheet的问题

    QPixmap bkgnd("imgs/background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    animation_timer = new QTimer(this);

    connect(ui->back_Btn,SIGNAL(clicked()),this,SLOT(back_Event()));
    connect(animation_timer,SIGNAL(timeout()),this,SLOT(update_Event()));


    srand((unsigned)time(0));
    animation_timer->start(50);

    QTimer::singleShot(6000,this,[=]{
        animation_timer->stop();

        string path = pathPrefix+std::to_string(result.id)+".png";
        QImage resultBG(QString::fromStdString(path));
        ui->songBG->setPixmap(QPixmap::fromImage(resultBG));
        ui->songName->setText(QString::fromStdString(result.songName));
        ui->songDiff->setText(QString::fromStdString(result.songDiff));
    });

    return;
}

selectWindow::~selectWindow() {
    delete ui;
}


void selectWindow::update_Event() {
    songData currSong = vis_random[rand()%vis_random.size()];

    string path = pathPrefix+std::to_string(currSong.id)+".png";
    //cout << path << endl;
    QImage resultBG(QString::fromStdString(path));
    ui->songBG->setPixmap(QPixmap::fromImage(resultBG));
    ui->songName->setText(QString::fromStdString(currSong.songName));
    ui->songDiff->setText(QString::fromStdString(currSong.songDiff));
}

void selectWindow::back_Event() {

    this->close();
    return;
}