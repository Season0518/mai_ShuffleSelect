//
// Created by 13423 on 2022/8/13.
//

#ifndef UNTITLED_SELECTWINDOW_H
#include "global.h"

#endif

#define UNTITLED_SELECTWINDOW_H

#ifdef UNTITLED_SELECTWINDOW_H

#include <QWidget>
#include <QStyleOption>


QT_BEGIN_NAMESPACE
namespace Ui { class selectWindow; }
QT_END_NAMESPACE

class selectWindow : public QWidget {
Q_OBJECT

public:
    explicit selectWindow(QWidget *parent = nullptr);

    songData result;
    queue<songData> currList;
    std::vector<songData> vis_random;
    string pathPrefix;

    ~selectWindow() override;

private slots:
    void back_Event();
    void update_Event();

protected:
    //void paintEvent(QPaintEvent *p2);

private:
    Ui::selectWindow *ui;
    QTimer *animation_timer;



};


#endif //UNTITLED_SELECTWINDOW_H
