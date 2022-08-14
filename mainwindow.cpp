//
// Created by 13423 on 2022/8/14.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainWindow.h" resolved

#include <QApplication>
#include <fstream>
#include <iostream>
#include <QMessageBox>
#include <random>

#include "mainwindow.h"
#include "Ui_mainWindow.h"

#include "selectwindow.h"
#include "Ui_selectwindow.h"

std::queue<songData> dataA;
std::queue<songData> dataB;
std::queue<songData> dataC;
std::vector<songData> visitA;
std::vector<songData> visitB;
std::vector<songData> visitC;

mainWindow::mainWindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::mainWindow) {
    ui->setupUi(this);

    connect(ui->groupA_btn,SIGNAL(clicked()),this,SLOT(groupA_Event()));
    connect(ui->groupB_btn,SIGNAL(clicked()),this,SLOT(groupB_Event()));
    connect(ui->groupC_btn,SIGNAL(clicked()),this,SLOT(groupC_Event()));

    //定义渲染按钮图片的lambda表达式
    auto drawButtonImage = [](std::string imgPath,QPushButton *ptr)-> void{
        QPixmap pixmap(imgPath.c_str());
        QIcon ButtonIcon(pixmap);

        ptr->setIcon(ButtonIcon);
        ptr->setIconSize(pixmap.rect().size());
    };

    drawButtonImage("imgs/groupA_btn.png",ui->groupA_btn);
    drawButtonImage("imgs/groupB_btn.png",ui->groupB_btn);
    drawButtonImage("imgs/groupC_btn.png",ui->groupC_btn);

    //构造函数 读取歌曲信息

    shuffleList();

    cout << "WeLcOmE" << endl;
}

mainWindow::~mainWindow() {
    delete ui;
}

void mainWindow::shuffleList(){
    cout  <<"GroupA: " << readFromFile("data/songA.txt","data/diffA.txt",dataA,visitA) << " songs was loaded!!" << endl;
    cout  <<"GroupB: " << readFromFile("data/songB.txt","data/diffB.txt",dataB,visitB) << " songs was loaded!!" << endl;
    cout  <<"GroupC: " << readFromFile("data/songC.txt","data/diffC.txt",dataC,visitC) << " songs was loaded!!" << endl;
}

bool mainWindow::isPoolVaild(std::queue<songData> targetQ) {
    if(targetQ.empty()){
        QMessageBox::critical(this,"Error","曲池为空，不能进行抽取操作");
        return false;
    }
    return true;
}

int mainWindow::readFromFile(std::string songName,std::string diffName,std::queue<songData> &target,std::vector<songData> &vis_rand) {
    std::ifstream song_fs,diff_fs;

    song_fs.open(songName);
    diff_fs.open(diffName);

    //检查文件合法性，如果为空则跳过，如果单个文件异常则抛出错误
    if(!song_fs.is_open()||!diff_fs.is_open()){
        return 0;
    }
    else if(!song_fs.is_open()^!diff_fs.is_open()){
        QMessageBox::critical(this,"Error","难度文件或名称文件可能存在缺失");
    }

    songData temp;
    std::vector<songData> t_list;

    for(int id=1;!song_fs.eof()||!diff_fs.eof();id++){
        temp.id = id;
        getline(song_fs,temp.songName);
        getline(diff_fs,temp.songDiff);

        //当前读入如果为空行，则跳过该行
        if(temp.songName.empty()||temp.songDiff.empty()) continue;
        //读入文件行数如果不匹配则报出错误提示
        if(temp.songName.empty()^temp.songDiff.empty()){
            QMessageBox::critical(this,"Error","歌曲名与歌曲难度等级可能不匹配，请检查文件行数！");
        }

        t_list.push_back(temp);
    }
    vis_rand = t_list;

    //将歌单洗牌，存入队列中

    //机器随机
    std::random_device rd;
    std::mt19937 r_eng(rd()); //梅森旋转算法快速生成随机数

    //随机交换两个歌曲的位置，以完成洗牌算法
    //  cout << t_list.size() << endl;

    for(int i=0;i<(int)t_list.size();i++){
        int tarID = r_eng()%(int)t_list.size();
        songData c = t_list[tarID];
        t_list[tarID] = t_list[i];
        t_list[i] = c;
    }

    for(auto const& t:t_list){
        target.push(t);
    }

    return (int)t_list.size();
}

void mainWindow::selectMusic(songData result,const std::queue<songData> list,const std::vector<songData> visit,const std::string prefix) {
    selectWindow *sw = new selectWindow;

    //如果当前的队列被抽取完毕则重新洗牌
    this->listCounter++;
    if(this->listCounter%visit.size()==0&&this->listCounter){
        cout << "Order of song was been reset" << endl;
        shuffleList();
    }

    //初始化新界面
    sw->show();
    sw->result = result;
    sw->currList = list;
    sw->vis_random = visit;
    sw->pathPrefix = prefix;

    //sw->show();
    return;
}

void mainWindow::groupA_Event() {
    if(!isPoolVaild(dataA)){
        return;
    }
    songData result = dataA.front();
    dataA.pop();dataA.push(result);


    cout << "result: " << result.songName << endl;
    selectMusic(result,dataA,visitA,"bgA/");

}

void mainWindow::groupB_Event() {
    if(!isPoolVaild(dataB)){
        return;
    }

    songData result = dataB.front();
    dataB.pop();dataB.push(result);

    cout << "result: " << result.songName << endl;
    selectMusic(result,dataB,visitB,"bgB/");
}

void mainWindow::groupC_Event() {
    if(!isPoolVaild(dataC)){
        return;
    }

    songData result = dataC.front();
    dataC.pop();dataC.push(result);

    cout << "result: " << result.songName << endl;
    selectMusic(result,dataC,visitC,"bgC/");
}
