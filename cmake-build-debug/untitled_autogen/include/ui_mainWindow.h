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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *groupA_btn;
    QPushButton *groupB_btn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(597, 435);
        mainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/imgs/background.png);"));
        horizontalLayout_2 = new QHBoxLayout(mainWindow);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        groupA_btn = new QPushButton(mainWindow);
        groupA_btn->setObjectName(QString::fromUtf8("groupA_btn"));
        groupA_btn->setCursor(QCursor(Qt::ArrowCursor));
        groupA_btn->setLayoutDirection(Qt::LeftToRight);
        groupA_btn->setAutoFillBackground(false);
        groupA_btn->setStyleSheet(QString::fromUtf8("background-image: url(:/imgs/groupA_btn.png)"));

        horizontalLayout->addWidget(groupA_btn);

        groupB_btn = new QPushButton(mainWindow);
        groupB_btn->setObjectName(QString::fromUtf8("groupB_btn"));
        groupB_btn->setStyleSheet(QString::fromUtf8("background-image: url(:/imgs/groupB_btn.png);"));

        horizontalLayout->addWidget(groupB_btn);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(mainWindow);
        QObject::connect(groupB_btn, &QPushButton::clicked, groupB_btn, qOverload<>(&QPushButton::click));
        QObject::connect(groupA_btn, &QPushButton::clicked, groupA_btn, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QWidget *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "SelectMusic", nullptr));
        groupA_btn->setText(QString());
        groupB_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
