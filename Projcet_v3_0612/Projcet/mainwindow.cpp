#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    imageLoad();
}


MainWindow::~MainWindow(){
    delete ui;
}


//메인화면을 장식할 이미지를 불러와서 띄운다.
void MainWindow::imageLoad(){
    QPixmap img("mainimg.png");
    int w= ui->mainPicture->width();
    int h= ui->mainPicture->height();
    ui->mainPicture->setPixmap(img.scaled(w,h-40));
}


void MainWindow::on_gambleButton_clicked(){
    //창을 최소화기능이 있는 형태로 띄운다.
   gamblewindow.setWindowFlag(Qt::WindowMinimizeButtonHint);
   gamblewindow.show();
// gamblewindow.exec();
}


void MainWindow::on_memoButton_clicked(){
    notepadWindow.setWindowFlag(Qt::WindowMinimizeButtonHint);
    notepadWindow.show();
//  notepadWindow.exec();
}


void MainWindow::on_teamInfoButton_clicked(){
   teaminfo.setWindowFlag(Qt::WindowMinimizeButtonHint);
   teaminfo.show();
// teaminfo.exec();
}


void MainWindow::on_pushButton_6_clicked(){
    exef.setWindowFlag(Qt::WindowMinimizeButtonHint);
    exef.show();
//  exef.exec();
}


void MainWindow::on_exitButton_clicked(){
    //프로그램 종료시 모든창을 닫게한다.
    notepadWindow.close();
    teaminfo.close();
    exef.close();
    gamblewindow.close();
    this->close();
}


void MainWindow::on_pushButton_3_clicked(){
   mycal.setWindowFlag(Qt::WindowMinimizeButtonHint);
   mycal.show();
// mycal.exec();
}
