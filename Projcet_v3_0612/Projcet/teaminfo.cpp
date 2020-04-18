#include "teaminfo.h"
#include "ui_teaminfo.h"
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QString>

TeamInfo::TeamInfo(QWidget *parent) : QDialog(parent), ui(new Ui::TeamInfo){
    ui->setupUi(this);
}


TeamInfo::~TeamInfo(){
    delete ui;
}

//저장하면 텍스트파일 저장 + 창으로 뜨게
void TeamInfo::on_saveButton_clicked(){
    //정보를 입력하지 않으면 저장하지 못하게 함
    if(ui->team_member->count()==0||ui->edit_team->text()==""||ui->edit_startdate->text()==""||ui->edit_enddate->text()==""||ui->edit_leader->text()==""){
        QMessageBox msg;
        msg.setText("Put Team Information");
        msg.exec();
        return;
    }

    //오류방지를 위해서 변수안에 저장되어있는 데이터를 비운다.
    teamName.clear();
    startdate.clear();
    enddate.clear();
    leader.clear();
    member.clear();

    //각 변수에 데이터를 받는다.
    teamName = ui->edit_team->text();
    startdate = ui->edit_startdate->text();
    enddate = ui->edit_enddate->text();
    leader = ui->edit_leader->text();

    for(int i = 0; i < ui->team_member->count(); ++i){
        QString item = ui->team_member->item(i)->text();
        member.push_back(item);
     }

    //해당 폴더가 없다면 생성한다.
    QDir dirf("MyTeamInfo");
    if(!dirf.exists()){
        dirf.mkpath(".");
    }

    //폴더에 저정할 수 있게 파일이름을 정한다.
    QString filename="MyTeamInfo/"+teamName+".txt";
    QFile file(filename);
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    if(!file.isOpen()){
        return;
    }

    //내용을 파일로 저장한다.
    QTextStream save(&file);
    save<<teamName<<endl;
    save<<startdate<<endl;
    save<<enddate<<endl;
    save<<leader<<endl;
    for (int i = 0;i<member.size();++i){
        save <<member[i]<<endl;
    }
    file.close();

    //메시지 창을 띄운다.
    QMessageBox msgbox;
    msgbox.setText("Save File");
    msgbox.exec();
}


void TeamInfo::on_loadButton_clicked(){
    //불러오기 위해서는 해당 폴더가 존재해야한다.
    QDir dirf("MyTeamInfo");
    if(!dirf.exists()){
        QMessageBox msg;
        msg.setText("No MyTeamInfo Folder!");
        msg.exec();
        return;
    }

    QString filee = QFileDialog::getOpenFileName();
    //파일지정안했을때 오류방지
    if(filee == ""){
        return;
    }

    //적혀져있는 내용들을 지운다.
    ui->team_member->clear();
    ui->edit_team->clear();
    ui->edit_startdate->clear();
    ui->edit_enddate->clear();
    ui->edit_leader->clear();

    //오류 방지를 위해서 변수들에 저장된 데이터를 지운다.
    teamName.clear();
    startdate.clear();
    enddate.clear();
    leader.clear();
    member.clear();

    QFileInfo temp = filee;
    QString filename ="MyTeamInfo/"+ temp.baseName()+".txt";
//  qDebug()<<filename;
    QFile file(filename);
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen()){
        return;
    }
    QTextStream read(&file);
    QString str;
    str=read.readAll();

    //한줄한줄씩 데이터를 읽어온다음 변수들에 저장한다.
    QStringList strList = str.split("\n", QString::SkipEmptyParts);
    teamName = strList[0];
    startdate = strList[1];
    enddate = strList[2];
    leader = strList[3];
    for (int i = 4;i<strList.size();++i){
        member.push_back( strList[i]);
    }

    //저장된 변수들을 통해서 화면에 띄워준다.
    ui->edit_team->setText(teamName) ;
    ui->edit_startdate->setText(startdate);
    ui->edit_enddate->setText(enddate);
    ui->edit_leader->setText(leader);
    for(int i = 0;i< member.size(); ++i){
        ui->team_member->addItem(member[i]);
    }
    file.close();

    //메시지 출력
    QMessageBox msgBox;
    msgBox.setText("file open");
    msgBox.exec();
}


void TeamInfo::on_addButton_clicked(){
    //이름을 쓰지 않았을때
    if(ui->teamMemberName->text().isEmpty()){
        QMessageBox msg;
        msg.setText("Wirte Name");
        msg.exec();
        return;
    }

    //동일한 이름이 있을때
    for(int i=0;i<ui->team_member->count();i++){
        if(ui->teamMemberName->text()==ui->team_member->item(i)->text()){
            QMessageBox msg;
            msg.setText(QString::fromLocal8Bit("Rewirte other name"));
            msg.exec();
            return;
        }
    }
    ui->team_member->addItem(ui->teamMemberName->text());
    ui->teamMemberName->setText("");
}


//팀원 지우기
void TeamInfo::on_removeButton_clicked(){
    int r=ui->team_member->currentRow();
    if(r!=-1){
        QListWidgetItem *item= ui->team_member->takeItem(r);
        delete item;
    }
}


//나가기
void TeamInfo::on_exitButton_clicked(){
    this->close();
}
