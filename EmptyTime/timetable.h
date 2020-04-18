#ifndef TIMETABLE_H
#define TIMETABLE_H

#include"img.h"

class TimeTable{
private:
    Mat final_table;

public:
    TimeTable();
    void finalImage(Img arr[]);
    void calTime();
};

#endif // TIMETABLE_H
