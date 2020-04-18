/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NotePad
{
public:
    QTextEdit *textEdit;
    QPushButton *DirectoryButton;
    QPushButton *ExitButton;
    QPushButton *FileSaveButton;
    QPushButton *FileOpenButton;
    QListWidget *listWidget;
    QPushButton *newButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *NotePad)
    {
        if (NotePad->objectName().isEmpty())
            NotePad->setObjectName(QString::fromUtf8("NotePad"));
        NotePad->resize(817, 678);
        textEdit = new QTextEdit(NotePad);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 571, 631));
        DirectoryButton = new QPushButton(NotePad);
        DirectoryButton->setObjectName(QString::fromUtf8("DirectoryButton"));
        DirectoryButton->setGeometry(QRect(590, 520, 211, 28));
        ExitButton = new QPushButton(NotePad);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(590, 630, 211, 28));
        FileSaveButton = new QPushButton(NotePad);
        FileSaveButton->setObjectName(QString::fromUtf8("FileSaveButton"));
        FileSaveButton->setGeometry(QRect(590, 470, 211, 28));
        FileOpenButton = new QPushButton(NotePad);
        FileOpenButton->setObjectName(QString::fromUtf8("FileOpenButton"));
        FileOpenButton->setGeometry(QRect(590, 560, 211, 28));
        listWidget = new QListWidget(NotePad);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(590, 30, 211, 341));
        newButton = new QPushButton(NotePad);
        newButton->setObjectName(QString::fromUtf8("newButton"));
        newButton->setGeometry(QRect(590, 430, 211, 28));
        lineEdit = new QLineEdit(NotePad);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(590, 400, 211, 21));
        label = new QLabel(NotePad);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(590, 380, 71, 16));
        label_2 = new QLabel(NotePad);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(600, 10, 56, 12));
        label_3 = new QLabel(NotePad);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 56, 12));

        retranslateUi(NotePad);

        QMetaObject::connectSlotsByName(NotePad);
    } // setupUi

    void retranslateUi(QDialog *NotePad)
    {
        NotePad->setWindowTitle(QApplication::translate("NotePad", "\353\251\224\353\252\250\354\236\245", nullptr));
        DirectoryButton->setText(QApplication::translate("NotePad", "\353\224\224\353\240\211\355\206\240\353\246\254 \355\203\220\354\203\211", nullptr));
        ExitButton->setText(QApplication::translate("NotePad", "\353\202\230\352\260\200\352\270\260", nullptr));
        FileSaveButton->setText(QApplication::translate("NotePad", "\353\202\264\354\232\251 \354\240\200\354\236\245", nullptr));
        FileOpenButton->setText(QApplication::translate("NotePad", "\355\214\214\354\235\274 \354\227\264\352\270\260", nullptr));
        newButton->setText(QApplication::translate("NotePad", "\355\214\214\354\235\274 \353\247\214\353\223\244\352\270\260", nullptr));
        label->setText(QApplication::translate("NotePad", "\355\214\214\354\235\274 \354\235\264\353\246\204 ", nullptr));
        label_2->setText(QApplication::translate("NotePad", "\355\214\214\354\235\274\353\252\251\353\241\235", nullptr));
        label_3->setText(QApplication::translate("NotePad", "\353\251\224\353\252\250\353\202\264\354\232\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotePad: public Ui_NotePad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
