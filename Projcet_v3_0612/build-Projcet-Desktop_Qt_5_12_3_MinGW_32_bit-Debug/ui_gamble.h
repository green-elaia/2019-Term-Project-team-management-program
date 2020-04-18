/********************************************************************************
** Form generated from reading UI file 'gamble.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMBLE_H
#define UI_GAMBLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Gamble
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *teamLeaderButton;
    QListWidget *listWidget;
    QPushButton *pushButtoTMAdd;
    QLineEdit *lineEdit_2;
    QPushButton *pushButtoTMremove;
    QPushButton *clearButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Gamble)
    {
        if (Gamble->objectName().isEmpty())
            Gamble->setObjectName(QString::fromUtf8("Gamble"));
        Gamble->resize(479, 537);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("gg");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        Gamble->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(Gamble);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(260, 490, 201, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(Gamble);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 20, 101, 16));
        lineEdit = new QLineEdit(Gamble);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 380, 113, 21));
        teamLeaderButton = new QPushButton(Gamble);
        teamLeaderButton->setObjectName(QString::fromUtf8("teamLeaderButton"));
        teamLeaderButton->setGeometry(QRect(310, 380, 93, 28));
        listWidget = new QListWidget(Gamble);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 100, 256, 192));
        pushButtoTMAdd = new QPushButton(Gamble);
        pushButtoTMAdd->setObjectName(QString::fromUtf8("pushButtoTMAdd"));
        pushButtoTMAdd->setGeometry(QRect(330, 150, 93, 28));
        lineEdit_2 = new QLineEdit(Gamble);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 120, 113, 21));
        pushButtoTMremove = new QPushButton(Gamble);
        pushButtoTMremove->setObjectName(QString::fromUtf8("pushButtoTMremove"));
        pushButtoTMremove->setGeometry(QRect(330, 190, 93, 28));
        clearButton = new QPushButton(Gamble);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(330, 230, 93, 28));
        label_2 = new QLabel(Gamble);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 70, 64, 15));
        label_3 = new QLabel(Gamble);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 90, 131, 16));
        label_4 = new QLabel(Gamble);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 380, 81, 16));

        retranslateUi(Gamble);
        QObject::connect(buttonBox, SIGNAL(accepted()), Gamble, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Gamble, SLOT(reject()));

        QMetaObject::connectSlotsByName(Gamble);
    } // setupUi

    void retranslateUi(QDialog *Gamble)
    {
        Gamble->setWindowTitle(QApplication::translate("Gamble", "\355\214\200\354\236\245 \353\275\221\352\270\260", nullptr));
        label->setText(QApplication::translate("Gamble", "\355\214\200\354\236\245 \353\275\221\352\270\260", nullptr));
        teamLeaderButton->setText(QApplication::translate("Gamble", "\354\266\224\354\262\250", nullptr));
        pushButtoTMAdd->setText(QApplication::translate("Gamble", "\354\266\224\352\260\200", nullptr));
        pushButtoTMremove->setText(QApplication::translate("Gamble", "\354\202\255\354\240\234", nullptr));
        clearButton->setText(QApplication::translate("Gamble", "\353\252\251\353\241\235 \354\202\255\354\240\234", nullptr));
        label_2->setText(QApplication::translate("Gamble", "\355\214\200\354\233\220 ", nullptr));
        label_3->setText(QApplication::translate("Gamble", "\354\235\264\353\246\204\354\235\204 \354\236\205\353\240\245\355\225\230\354\204\270\354\232\224", nullptr));
        label_4->setText(QApplication::translate("Gamble", "\355\226\211\354\232\264\354\235\230 \355\214\200\354\236\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamble: public Ui_Gamble {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMBLE_H
