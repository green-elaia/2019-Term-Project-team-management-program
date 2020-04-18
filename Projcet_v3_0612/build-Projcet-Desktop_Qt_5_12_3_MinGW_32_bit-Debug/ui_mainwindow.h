/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *exitButton;
    QLabel *mainPicture;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *memoButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *teamInfoButton;
    QPushButton *gambleButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(562, 495);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 111, 16));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(440, 390, 93, 28));
        mainPicture = new QLabel(centralWidget);
        mainPicture->setObjectName(QString::fromUtf8("mainPicture"));
        mainPicture->setGeometry(QRect(0, 10, 431, 411));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(440, 40, 95, 341));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        memoButton = new QPushButton(layoutWidget);
        memoButton->setObjectName(QString::fromUtf8("memoButton"));

        verticalLayout->addWidget(memoButton);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        teamInfoButton = new QPushButton(layoutWidget);
        teamInfoButton->setObjectName(QString::fromUtf8("teamInfoButton"));

        verticalLayout->addWidget(teamInfoButton);

        gambleButton = new QPushButton(layoutWidget);
        gambleButton->setObjectName(QString::fromUtf8("gambleButton"));

        verticalLayout->addWidget(gambleButton);

        MainWindow->setCentralWidget(centralWidget);
        mainPicture->raise();
        label->raise();
        exitButton->raise();
        layoutWidget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 562, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ProjectManager", nullptr));
        label->setText(QApplication::translate("MainWindow", "Project Manager", nullptr));
        exitButton->setText(QApplication::translate("MainWindow", "\353\202\230\352\260\200\352\270\260", nullptr));
        mainPicture->setText(QString());
        memoButton->setText(QApplication::translate("MainWindow", "\353\251\224\353\252\250\354\236\245", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\354\212\244\354\274\200\354\245\264 \352\264\200\353\246\254", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\354\213\234\352\260\204\354\260\276\352\270\260", nullptr));
        teamInfoButton->setText(QApplication::translate("MainWindow", "\355\214\200\354\240\225\353\263\264 \352\264\200\353\246\254", nullptr));
        gambleButton->setText(QApplication::translate("MainWindow", "\355\214\200\354\236\245\353\275\221\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
