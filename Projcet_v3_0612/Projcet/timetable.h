#ifndef TIMETABLE_H
#define TIMETABLE_H

#include"img.h"
#include<QVector>
#include<QString>

class TimeTable{
private:
    Mat final_table;

public:
    TimeTable();
    void finalImage(Img arr[]);
    void calTime(QVector<QString> &vec);
};

#endif // TIMETABLE_H
