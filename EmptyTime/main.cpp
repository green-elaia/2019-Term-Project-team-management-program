#include "mainwindow.h"
#include <QApplication>
#include<iostream>
#include"img.h"
#include"timetable.h"
#include<QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    std::string student1 = "C:/Users/green/Desktop/EmptyTime/student1.jpg";
    std::string student2 = "C:/Users/green/Desktop/EmptyTime/student2.jpg";
    std::string student3 = "C:/Users/green/Desktop/EmptyTime/student3.jpg";
    std::string student4 = "C:/Users/green/Desktop/EmptyTime/student4.jpg";
    Img s1(student1);
    Img s2(student2);
    Img s3(student3);
    Img s4(student4);

    Img *arr = new Img[4];
    arr[0] = s1;
    arr[1] = s2;
    arr[2] = s3;
    arr[3] = s4;


    TimeTable t;
    t.finalImage(arr);
    t.calTime();

    delete[] arr;

    return a.exec();
}
