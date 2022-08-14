//
// Created by 13423 on 2022/8/14.
//

#ifndef UNTITLED_MAINWINDOW_H
#include "global.h"
#define UNTITLED_MAINWINDOW_H

#include <QWidget>



QT_BEGIN_NAMESPACE
namespace Ui { class mainWindow; }
QT_END_NAMESPACE

class mainWindow : public QWidget {
Q_OBJECT


public:
    explicit mainWindow(QWidget *parent = nullptr);
    ~mainWindow() override;

    void selectMusic(songData result,const std::queue<songData> list,const std::vector<songData> visit,const std::string prefix);


private slots:
    void groupA_Event();
    void groupB_Event();
    void groupC_Event();

private:
    Ui::mainWindow *ui;
    int readFromFile(std::string songName,std::string diffName,std::queue<songData> &target,std::vector<songData> &vis_rand);
    int listCounter = 0;

    void shuffleList();
    bool isPoolVaild(std::queue<songData> targetQ);

};


#endif //UNTITLED_MAINWINDOW_H
