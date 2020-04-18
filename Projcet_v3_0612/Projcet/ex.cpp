#include "ex.h"
#include "ui_ex.h"
#include"timetable.h"
#include<QDebug>

ex::ex(QWidget *parent) : QDialog(parent), ui(new Ui::ex){
    ui->setupUi(this);
    dir="TimeTable";

    //실행시키면 바로 TimeTable안에 있는 파일들 목록에 보여줌
    dir.setFilter(QDir::Files|QDir::Hidden|QDir::NoSymLinks);
    ui->listWidget->clear();
    QFileInfoList list=dir.entryInfoList();

    for(int i=0;i<list.size();i++){
        QFileInfo fileInfo= list.at(i);
        ui->listWidget->addItem(QString("%1").arg(fileInfo.baseName()));
    }
}


ex::~ex(){
    delete ui;
}


//공강시간 실행버튼
void ex::on_exeButton_clicked(){
    //사진은 TimeTable 폴더에서 가져오도록 설정
    std::string student1 = "C:/Users/green/Desktop/Projcet_v3_0611/build-Projcet-Desktop_Qt_5_12_3_MinGW_32_bit-Debug/TimeTable/student1.jpg";
    std::string student2 = "C:/Users/green/Desktop/Projcet_v3_0611/build-Projcet-Desktop_Qt_5_12_3_MinGW_32_bit-Debug/TimeTable/student2.jpg";
    std::string student3 = "C:/Users/green/Desktop/Projcet_v3_0611/build-Projcet-Desktop_Qt_5_12_3_MinGW_32_bit-Debug/TimeTable/student3.jpg";
    std::string student4 = "C:/Users/green/Desktop/Projcet_v3_0611/build-Projcet-Desktop_Qt_5_12_3_MinGW_32_bit-Debug/TimeTable/student4.jpg";
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
    t.calTime(this->vec);

    while (!vec.isEmpty()) {
        ui->timeText->append(vec.takeFirst());
    }

    delete[] arr;
}


//파일을 선택하는 메소드
void ex::on_openButton_clicked(){
    //TimeTable폴더가 없다면 만들어줌
    QDir dirf("TimeTable");
    if(!dirf.exists()){
        dirf.mkpath(".");
    }

    QString filename = QFileDialog::getOpenFileName();
    //파일 선택 안 했을때 오류방지
    if(filename=="") return;

    QFileInfo temp = filename;
    for(int i=0;i<ui->listWidget->count();i++){
        if(ui->listWidget->item(i)->text() == temp.baseName()){
           QMessageBox msg;
           msg.setText("Exisiting equal File");
           msg.exec();
           return;
        }
    }

    //불러온 이미지 파일을 TimeTable이라는 폴더에 저장해줌
   QImage image(filename);
   image.save("TimeTable\\"+temp.fileName());
   ui->listWidget->addItem(QString("%1").arg(temp.baseName()));
}


//TimeTable에 있는 해당 이미지 파일 삭제
void ex::on_deleteButton_clicked(){
    QString filename;
    int r=ui->listWidget->currentRow();
    if(r!=-1){
        filename=ui->listWidget->currentItem()->text();
        QListWidgetItem *item= ui->listWidget->takeItem(r);
        delete item;
    }
    QFile::remove("TimeTable\\"+filename+".png");
}


void ex::on_exitButton_clicked(){
    this->close();
}
