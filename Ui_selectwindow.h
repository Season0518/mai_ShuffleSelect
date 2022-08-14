/********************************************************************************
** Form generated from reading UI file 'selectwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWINDOW_H
#define UI_SELECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *songBG;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *songName;
    QLabel *songDiff;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *back_Btn;

    void setupUi(QWidget *selectWindow)
    {
        if (selectWindow->objectName().isEmpty())
            selectWindow->setObjectName(QString::fromUtf8("selectWindow"));
        selectWindow->resize(608, 478);
        selectWindow->setMinimumSize(QSize(400, 400));
        selectWindow->setStyleSheet(QString::fromUtf8("#selectWindow{ border-image: url(:/imgs/background.png);}"));
        verticalLayout_2 = new QVBoxLayout(selectWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        songBG = new QLabel(selectWindow);
        songBG->setObjectName(QString::fromUtf8("songBG"));
        songBG->setStyleSheet(QString::fromUtf8("#selectWindow{border-image: url(:/imgs/background.png);}"));
        songBG->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(songBG);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        songName = new QLabel(selectWindow);
        songName->setObjectName(QString::fromUtf8("songName"));
        QFont font;
        font.setPointSize(42);
        songName->setFont(font);
        songName->setLayoutDirection(Qt::LeftToRight);
        songName->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(songName);

        songDiff = new QLabel(selectWindow);
        songDiff->setObjectName(QString::fromUtf8("songDiff"));
        QFont font1;
        font1.setPointSize(36);
        songDiff->setFont(font1);
        songDiff->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(songDiff);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        back_Btn = new QPushButton(selectWindow);
        back_Btn->setObjectName(QString::fromUtf8("back_Btn"));

        horizontalLayout->addWidget(back_Btn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(selectWindow);

        QMetaObject::connectSlotsByName(selectWindow);
    } // setupUi

    void retranslateUi(QWidget *selectWindow)
    {
        selectWindow->setWindowTitle(QCoreApplication::translate("selectWindow", "selectWindow", nullptr));
        songBG->setText(QCoreApplication::translate("selectWindow", "TextLabel", nullptr));
        songName->setText(QCoreApplication::translate("selectWindow", "TextLabel", nullptr));
        songDiff->setText(QCoreApplication::translate("selectWindow", "TextLabel", nullptr));
        back_Btn->setText(QCoreApplication::translate("selectWindow", "\350\277\224\345\233\236\351\200\211\346\233\262\347\225\214\351\235\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectWindow: public Ui_selectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWINDOW_H
