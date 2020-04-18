/********************************************************************************
** Form generated from reading UI file 'calendar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDAR_H
#define UI_CALENDAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calendar
{
public:
    QCalendarWidget *calendarWidget;
    QTextEdit *Task;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *TaskDate;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *Open;
    QPushButton *Erase;
    QPushButton *Save;
    QPushButton *Exit;

    void setupUi(QDialog *calendar)
    {
        if (calendar->objectName().isEmpty())
            calendar->setObjectName(QString::fromUtf8("calendar"));
        calendar->resize(675, 603);
        calendarWidget = new QCalendarWidget(calendar);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(290, 70, 344, 236));
        Task = new QTextEdit(calendar);
        Task->setObjectName(QString::fromUtf8("Task"));
        Task->setGeometry(QRect(90, 100, 181, 201));
        label_2 = new QLabel(calendar);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 71, 201));
        label = new QLabel(calendar);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 70, 31, 20));
        TaskDate = new QLineEdit(calendar);
        TaskDate->setObjectName(QString::fromUtf8("TaskDate"));
        TaskDate->setGeometry(QRect(90, 70, 181, 21));
        widget = new QWidget(calendar);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(360, 340, 221, 161));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Open = new QPushButton(widget);
        Open->setObjectName(QString::fromUtf8("Open"));

        verticalLayout->addWidget(Open);

        Erase = new QPushButton(widget);
        Erase->setObjectName(QString::fromUtf8("Erase"));

        verticalLayout->addWidget(Erase);

        Save = new QPushButton(widget);
        Save->setObjectName(QString::fromUtf8("Save"));

        verticalLayout->addWidget(Save);

        Exit = new QPushButton(widget);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        verticalLayout->addWidget(Exit);


        retranslateUi(calendar);

        QMetaObject::connectSlotsByName(calendar);
    } // setupUi

    void retranslateUi(QDialog *calendar)
    {
        calendar->setWindowTitle(QApplication::translate("calendar", "\354\212\244\354\274\200\354\245\264 \352\264\200\353\246\254", nullptr));
        label_2->setText(QApplication::translate("calendar", "\355\225\264\354\225\274 \355\225\240 \354\235\274", nullptr));
        label->setText(QApplication::translate("calendar", "\353\202\240\354\247\234", nullptr));
        Open->setText(QApplication::translate("calendar", "\354\230\244\353\212\230\354\235\230 \355\225\240 \354\235\274", nullptr));
        Erase->setText(QApplication::translate("calendar", "\354\247\200\354\232\260\352\270\260", nullptr));
        Save->setText(QApplication::translate("calendar", "\352\270\260\353\241\235\355\225\230\352\270\260", nullptr));
        Exit->setText(QApplication::translate("calendar", "\353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calendar: public Ui_calendar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDAR_H
