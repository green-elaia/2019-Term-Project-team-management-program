#include"timetable.h"
#include<QDebug>

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
    for (int y = 0; y < this->final_table.size().height; y++){
        for (int x = 0; x < this->final_table.size().width; x++){
            temp = a1.at<uchar>(y, x) + a2.at<uchar>(y, x) + a3.at<uchar>(y, x) + a4.at<uchar>(y, x);
            if (temp == 1020)
                this->final_table.at<uchar>(y, x) = 255;
            else
                this->final_table.at<uchar>(y, x) = 0;
        }
    }
//    imshow("final", this->final_table);
}


//img convert to string
void TimeTable::calTime(QVector<QString> &vec){
    uchar cur;
    int x = 60;
    int y = 40;
    for(int i=0; i<5; i++){
        switch (i) {
        case 0: vec.push_back(QString("Monday")); break;
        case 1: vec.push_back(QString("Tuesday")); break;
        case 2: vec.push_back(QString("Wednesday")); break;
        case 3: vec.push_back(QString("Thursday")); break;
        case 4: vec.push_back(QString("Friday")); break;
        }
        for(int j=0; j<20;j++){
            cur = this->final_table.at<uchar>(y,x);
            if(cur == 255){
                switch (j) {
                case 0: vec.push_back(QString("9:00 ~ 9:30")); break;
                case 1: vec.push_back(QString("9:30 ~ 10:00")); break;
                case 2: vec.push_back(QString("10:00 ~ 10:30")); break;
                case 3: vec.push_back(QString("10:30 ~ 11:00")); break;
                case 4: vec.push_back(QString("11:00 ~ 11:30")); break;
                case 5: vec.push_back(QString("11:30 ~ 12:00")); break;
                case 6: vec.push_back(QString("12:00 ~ 12:30")); break;
                case 7: vec.push_back(QString("12:30 ~ 13:00")); break;
                case 8: vec.push_back(QString("13:00 ~ 13:30")); break;
                case 9: vec.push_back(QString("13:30 ~ 14:00")); break;
                case 10: vec.push_back(QString("14:00 ~ 14:30")); break;
                case 11: vec.push_back(QString("14:30 ~ 15:00")); break;
                case 12: vec.push_back(QString("15:00 ~ 15:30")); break;
                case 13: vec.push_back(QString("15:30 ~ 16:00")); break;
                case 14: vec.push_back(QString("16:00 ~ 16:30")); break;
                case 15: vec.push_back(QString("16:30 ~ 17:00")); break;
                case 16: vec.push_back(QString("17:00 ~ 17:30")); break;
                case 17: vec.push_back(QString("17:30 ~ 18:00")); break;
                case 18: vec.push_back(QString("18:00 ~ 18:30")); break;
                case 19: vec.push_back(QString("18:30 ~ 19:00")); break;
                }
            }
            y +=35;
        }
        vec.push_back(QString("============"));
        y = 40;
        x +=90;
    }
}
