#include"timetable.h"
#include<QDebug>
//#include<iostream>

TimeTable::TimeTable(){
    this->final_table.create(720, 456, CV_8UC1);
//    imshow("final", this->final_table);
}


void TimeTable::finalImage(Img arr[]){
    Mat a1 = arr[0].getGray();
    Mat a2 = arr[1].getGray();
    Mat a3 = arr[2].getGray();
    Mat a4 = arr[3].getGray();
    unsigned int temp;
    for (int y = 0; y < this->final_table.size().height; y++)
    {
        for (int x = 0; x < this->final_table.size().width; x++)
        {
            temp = a1.at<uchar>(y, x) + a2.at<uchar>(y, x) + a3.at<uchar>(y, x) + a4.at<uchar>(y, x);
            if (temp == 1020)
                this->final_table.at<uchar>(y, x) = 255;
            else
                this->final_table.at<uchar>(y, x) = 0;
        }
    }
    imshow("final", this->final_table);
}


//img convert to string
void TimeTable::calTime(){
    uchar cur;
    int x = 60;
    int y = 40;

    for(int i=0; i<5; i++){
        switch (i) {
        case 0: qDebug()<<"Monday\n"; break;
        case 1: qDebug()<<"Tuesday\n"; break;
        case 2: qDebug()<<"Wednesday\n"; break;
        case 3: qDebug()<<"Thursday\n"; break;
        case 4: qDebug()<<"Friday\n"; break;
        }
        for(int j=0; j<20;j++){
            cur = this->final_table.at<uchar>(y,x);
//            qDebug()<<y<<" "<<x;
//            qDebug()<<cur<<"\n";

            if(cur == 255){
                switch (j) {
                case 0: qDebug()<<"9:00 ~ 9:30"<<endl; break;
                case 1: qDebug()<<"9:30 ~ 10:00"<<endl; break;
                case 2: qDebug()<<"10:00 ~ 10:30"<<endl; break;
                case 3: qDebug()<<"10:30 ~ 11:00"<<endl; break;
                case 4: qDebug()<<"11:00 ~ 11:30"<<endl; break;
                case 5: qDebug()<<"11:30 ~ 12:00"<<endl; break;
                case 6: qDebug()<<"12:00 ~ 12:30"<<endl; break;
                case 7: qDebug()<<"12:30 ~ 13:00"<<endl; break;
                case 8: qDebug()<<"13:00 ~ 13:30"<<endl; break;
                case 9: qDebug()<<"13:30 ~ 14:00"<<endl; break;
                case 10: qDebug()<<"14:00 ~ 14:30"<<endl; break;
                case 11: qDebug()<<"14:30 ~ 15:00"<<endl; break;
                case 12: qDebug()<<"15:00 ~ 15:30"<<endl; break;
                case 13: qDebug()<<"15:30 ~ 16:00"<<endl; break;
                case 14: qDebug()<<"16:00 ~ 16:30"<<endl; break;
                case 15: qDebug()<<"16:30 ~ 17:00"<<endl; break;
                case 16: qDebug()<<"17:00 ~ 17:30"<<endl; break;
                case 17: qDebug()<<"17:30 ~ 18:00"<<endl; break;
                case 18: qDebug()<<"18:00 ~ 18:30"<<endl; break;
                case 19: qDebug()<<"18:30 ~ 19:00"<<endl; break;
                }
            }
            y +=35;
        }
        qDebug()<<"============\n";
        y = 40;
        x +=90;
    }
}
