#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gamble.h"
#include "notepad.h"
#include "teaminfo.h"
#include "ex.h"
#include "calendar.h"
#include<QPixmap>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void imageLoad();

private slots:
    void on_gambleButton_clicked();
    void on_memoButton_clicked();
    void on_teamInfoButton_clicked();
    //공강시간찾기 버튼
    void on_pushButton_6_clicked();
    void on_exitButton_clicked();
    void on_pushButton_3_clicked();

private:
    //창을 한번에 끄기위해서 클래스 선언;
    Ui::MainWindow *ui;
    Gamble gamblewindow;
    NotePad notepadWindow;
    TeamInfo teaminfo;
    ex exef;
    calendar mycal;
};

#endif // MAINWINDOW_H
