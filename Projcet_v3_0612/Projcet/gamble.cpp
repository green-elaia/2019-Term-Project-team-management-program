#include "gamble.h"
#include "ui_gamble.h"

Gamble::Gamble(QWidget *parent) : QDialog(parent), ui(new Ui::Gamble){
    ui->setupUi(this);
}


Gamble::~Gamble(){
    delete ui;
}


//팀원 이름 추가
void Gamble::on_pushButtoTMAdd_clicked(){
    //이름을 쓰지 않았을때
    if(ui->lineEdit_2->text().isEmpty()){
        QMessageBox msg; msg.setText("Wirte Name"); msg.exec(); return;
    }
    //동일한 이름이 있을때
    for(int i=0;i<ui->listWidget->count();i++){
        if(ui->lineEdit_2->text()==ui->listWidget->item(i)->text()){
          QMessageBox msg; msg.setText("Change Name"); msg.exec(); return;
        }
    }
    //목록에 추가한다.
    ui->listWidget->addItem(ui->lineEdit_2->text());
    ui->lineEdit_2->setText("");
}


//팀원 삭제
void Gamble::on_pushButtoTMremove_clicked(){
    //목록에서 삭제한다.
    int r=ui->listWidget->currentRow();
    if(r!=-1){
        QListWidgetItem *item= ui->listWidget->takeItem(r);
        delete item;
    }
}


//조장 추첨
void Gamble::on_teamLeaderButton_clicked(){
    //목록이 비어있을때 오류가 발생하지 않도록
    if(ui->listWidget->count()==0){
        QMessageBox msg; msg.setText("Insert Name"); msg.exec(); return;
    }
    //r은 목록에 있는 아이템들의 개수(팀원 수)
    int r=ui->listWidget->count();
    //아이템들의 개수를 받아 doGamble 메서드를 통해서 팀장을 리턴받음
    QString teamLeader=doGamble(r);
    //팀 리더 출력
   ui->lineEdit->setText(teamLeader);
}


// 목록 삭제
void Gamble::on_clearButton_clicked(){
    ui->listWidget->clear();
}


//vector 안에 팀원들의 이름을 받아서 랜덤으로 팀장을 출력
QString Gamble::doGamble(int r){
    vector<string> teamMemberName;
    for(int i=0;i<r;i++){
    teamMemberName.push_back(ui->listWidget->item(i)->text().toStdString());
    }
    srand((unsigned int)time(0));
    int temp=rand()%teamMemberName.size();
    string person=teamMemberName[temp];
    QString temp2=QString::fromStdString(person);

    return temp2;
}
