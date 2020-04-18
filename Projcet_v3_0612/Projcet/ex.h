#ifndef EX_H
#define EX_H

#include<QDialog>
#include<QPixmap>
#include<QLabel>
#include<QImage>
#include<QDir>
#include<QFileDialog>
#include<QString>
#include<QMessageBox>
#include<QProcess>
#include"gamble.h"
#include"QTextCodec"
#include"QTextStream"
#include<QVector>

namespace Ui {
class ex;
}

class ex : public QDialog
{
    Q_OBJECT

public:
    explicit ex(QWidget *parent = nullptr);
    ~ex();

private slots:
    void on_exeButton_clicked();
    void on_openButton_clicked();
    void on_deleteButton_clicked();
    void on_exitButton_clicked();

private:
    Ui::ex *ui;
    QDir dir;
    QVector<QString> vec;
};

#endif // EX_H
