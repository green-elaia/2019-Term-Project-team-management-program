/********************************************************************************
** Form generated from reading UI file 'teaminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMINFO_H
#define UI_TEAMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TeamInfo
{
public:
    QLabel *label;
    QLineEdit *edit_team;
    QLineEdit *edit_startdate;
    QLineEdit *edit_enddate;
    QLineEdit *edit_leader;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *loadButton;
    QPushButton *exitButton;
    QPushButton *saveButton;
    QListWidget *team_member;
    QPushButton *addButton;
    QPushButton *removeButton;
    QLineEdit *teamMemberName;

    void setupUi(QDialog *TeamInfo)
    {
        if (TeamInfo->objectName().isEmpty())
            TeamInfo->setObjectName(QString::fromUtf8("TeamInfo"));
        TeamInfo->resize(616, 309);
        label = new QLabel(TeamInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 20, 64, 15));
        edit_team = new QLineEdit(TeamInfo);
        edit_team->setObjectName(QString::fromUtf8("edit_team"));
        edit_team->setGeometry(QRect(60, 80, 141, 21));
        edit_startdate = new QLineEdit(TeamInfo);
        edit_startdate->setObjectName(QString::fromUtf8("edit_startdate"));
        edit_startdate->setGeometry(QRect(60, 120, 141, 21));
        edit_enddate = new QLineEdit(TeamInfo);
        edit_enddate->setObjectName(QString::fromUtf8("edit_enddate"));
        edit_enddate->setGeometry(QRect(60, 160, 141, 21));
        edit_leader = new QLineEdit(TeamInfo);
        edit_leader->setObjectName(QString::fromUtf8("edit_leader"));
        edit_leader->setGeometry(QRect(60, 200, 141, 21));
        label_3 = new QLabel(TeamInfo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 31, 16));
        label_4 = new QLabel(TeamInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 120, 51, 16));
        label_5 = new QLabel(TeamInfo);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 160, 51, 16));
        label_6 = new QLabel(TeamInfo);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 200, 31, 16));
        label_7 = new QLabel(TeamInfo);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, 80, 64, 15));
        loadButton = new QPushButton(TeamInfo);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(380, 260, 93, 28));
        exitButton = new QPushButton(TeamInfo);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(490, 260, 93, 28));
        saveButton = new QPushButton(TeamInfo);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(270, 260, 93, 28));
        team_member = new QListWidget(TeamInfo);
        team_member->setObjectName(QString::fromUtf8("team_member"));
        team_member->setGeometry(QRect(280, 80, 201, 141));
        addButton = new QPushButton(TeamInfo);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(500, 130, 93, 28));
        removeButton = new QPushButton(TeamInfo);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(500, 170, 93, 28));
        teamMemberName = new QLineEdit(TeamInfo);
        teamMemberName->setObjectName(QString::fromUtf8("teamMemberName"));
        teamMemberName->setGeometry(QRect(500, 100, 91, 21));

        retranslateUi(TeamInfo);

        QMetaObject::connectSlotsByName(TeamInfo);
    } // setupUi

    void retranslateUi(QDialog *TeamInfo)
    {
        TeamInfo->setWindowTitle(QApplication::translate("TeamInfo", "\355\214\200 \354\240\225\353\263\264", nullptr));
        label->setText(QApplication::translate("TeamInfo", "\355\214\200 \354\240\225\353\263\264", nullptr));
        edit_team->setText(QString());
        label_3->setText(QApplication::translate("TeamInfo", "\355\214\200\353\252\205", nullptr));
        label_4->setText(QApplication::translate("TeamInfo", "\354\213\234\354\236\221\354\235\274", nullptr));
        label_5->setText(QApplication::translate("TeamInfo", "\353\247\210\352\260\220\354\235\274", nullptr));
        label_6->setText(QApplication::translate("TeamInfo", "\355\214\200\354\236\245", nullptr));
        label_7->setText(QApplication::translate("TeamInfo", "\355\214\200\354\233\220", nullptr));
        loadButton->setText(QApplication::translate("TeamInfo", "\353\266\210\353\237\254\354\230\244\352\270\260", nullptr));
        exitButton->setText(QApplication::translate("TeamInfo", "\353\202\230\352\260\200\352\270\260", nullptr));
        saveButton->setText(QApplication::translate("TeamInfo", "\354\240\200\354\236\245", nullptr));
        addButton->setText(QApplication::translate("TeamInfo", "\354\266\224\352\260\200", nullptr));
        removeButton->setText(QApplication::translate("TeamInfo", "\354\202\255\354\240\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeamInfo: public Ui_TeamInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMINFO_H
