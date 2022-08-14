/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *groupA_btn;
    QPushButton *groupB_btn;
    QPushButton *groupC_btn;

    void setupUi(QWidget *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(578, 454);
        verticalLayout_2 = new QVBoxLayout(mainWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupA_btn = new QPushButton(mainWindow);
        groupA_btn->setObjectName(QString::fromUtf8("groupA_btn"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupA_btn->sizePolicy().hasHeightForWidth());
        groupA_btn->setSizePolicy(sizePolicy);
        groupA_btn->setLayoutDirection(Qt::LeftToRight);
        groupA_btn->setAutoFillBackground(false);
        groupA_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/imgs/groupA_btn.png);"));

        horizontalLayout->addWidget(groupA_btn);

        groupB_btn = new QPushButton(mainWindow);
        groupB_btn->setObjectName(QString::fromUtf8("groupB_btn"));
        sizePolicy.setHeightForWidth(groupB_btn->sizePolicy().hasHeightForWidth());
        groupB_btn->setSizePolicy(sizePolicy);
        groupB_btn->setStyleSheet(QString::fromUtf8("border-image: url(:/imgs/groupB_btn.png);"));

        horizontalLayout->addWidget(groupB_btn);

        groupC_btn = new QPushButton(mainWindow);
        groupC_btn->setObjectName(QString::fromUtf8("groupC_btn"));

        horizontalLayout->addWidget(groupC_btn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QWidget *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "mainWindow", nullptr));
        groupA_btn->setText(QString());
        groupB_btn->setText(QString());
        groupC_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
