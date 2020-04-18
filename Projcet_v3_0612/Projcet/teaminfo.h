#ifndef TEAMINFO_H
#define TEAMINFO_H

#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QString>
#include<QVector>
#include<QDebug>
#include<QDir>

namespace Ui {
class TeamInfo;
}

class TeamInfo : public QDialog
{
    Q_OBJECT

public:
    explicit TeamInfo(QWidget *parent = nullptr);
    ~TeamInfo();

private slots:
    void on_saveButton_clicked();
    void on_loadButton_clicked();
    void on_addButton_clicked();
    void on_removeButton_clicked();
    void on_exitButton_clicked();

private:
    Ui::TeamInfo *ui;
    //팀정보 변수들
    QString teamName;
    QString startdate;
    QString enddate;
    QString leader;
    QVector<QString> member;
};

#endif // TEAMINFO_H
