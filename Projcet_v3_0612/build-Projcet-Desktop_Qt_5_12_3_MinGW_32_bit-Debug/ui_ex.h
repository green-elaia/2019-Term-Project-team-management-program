/********************************************************************************
** Form generated from reading UI file 'ex.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EX_H
#define UI_EX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ex
{
public:
    QPushButton *exeButton;
    QPushButton *openButton;
    QPushButton *deleteButton;
    QLabel *label_2;
    QListWidget *listWidget;
    QTextEdit *timeText;
    QLabel *label;
    QPushButton *exitButton;

    void setupUi(QDialog *ex)
    {
        if (ex->objectName().isEmpty())
            ex->setObjectName(QString::fromUtf8("ex"));
        ex->resize(549, 651);
        exeButton = new QPushButton(ex);
        exeButton->setObjectName(QString::fromUtf8("exeButton"));
        exeButton->setGeometry(QRect(400, 240, 93, 28));
        openButton = new QPushButton(ex);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(300, 50, 93, 28));
        deleteButton = new QPushButton(ex);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(300, 90, 93, 28));
        label_2 = new QLabel(ex);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 250, 81, 16));
        listWidget = new QListWidget(ex);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 50, 241, 171));
        timeText = new QTextEdit(ex);
        timeText->setObjectName(QString::fromUtf8("timeText"));
        timeText->setGeometry(QRect(40, 280, 461, 341));
        label = new QLabel(ex);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 141, 16));
        exitButton = new QPushButton(ex);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(410, 50, 91, 31));

        retranslateUi(ex);

        QMetaObject::connectSlotsByName(ex);
    } // setupUi

    void retranslateUi(QDialog *ex)
    {
        ex->setWindowTitle(QApplication::translate("ex", "Dialog", nullptr));
        exeButton->setText(QApplication::translate("ex", "\354\213\234\352\260\204 \354\260\276\352\270\260", nullptr));
        openButton->setText(QApplication::translate("ex", "\353\266\210\353\237\254\354\230\244\352\270\260", nullptr));
        deleteButton->setText(QApplication::translate("ex", "\354\202\255\354\240\234", nullptr));
        label_2->setText(QApplication::translate("ex", "\352\263\265\352\260\225\354\213\234\352\260\204", nullptr));
        label->setText(QApplication::translate("ex", "\354\213\234\352\260\204\355\221\234 \354\266\224\352\260\200 \353\260\217 \354\202\255\354\240\234", nullptr));
        exitButton->setText(QApplication::translate("ex", "\353\202\230\352\260\200\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ex: public Ui_ex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EX_H
