#include <QApplication>
#include <QPushButton>
#include "Ui_mainWindow.h"
#include "mainwindow.h"

#include <iostream>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
//    QPushButton button("Hello world!", nullptr);
//    button.resize(200, 100);
//    button.show();
//    return QApplication::exec();

    mainWindow window;
    window.show();

    std::cout << "mai_ShuffleSelectV2 Powered By Season" << std::endl;
    std::cout << "-*-*-*-*Running-*-*-*-*" << std::endl;


    return QApplication::exec();
}
