#include "notepad.h"
#include "ui_notepad.h"

NotePad::NotePad(QWidget *parent) : QDialog(parent), ui(new Ui::NotePad){
    ui->setupUi(this);
}


NotePad::~NotePad(){
    delete ui;
}


//디렉토리 지정(폴더를 지정하면 그 폴더 안에 있는 파일이 목록에 뜸)
void NotePad::on_DirectoryButton_clicked(){
    //폴더를 지정했을때 그 폴더의 정보가 dir에 넣어짐
    dir=QFileDialog::getExistingDirectory();

    //지정된 폴더의 정보를 필터링 해준다
    dir.setFilter(QDir::Files|QDir::Hidden|QDir::NoSymLinks);

    //목록을 비운다
    ui->listWidget->clear();

    //dir안에 있는 정보리스트를 list라는 변수에 넣는다.
    list=dir.entryInfoList();

    for(int i=0;i<list.size();i++){
        //정보리스트안에 있는 값을 불러온뒤
        QFileInfo fileInfo= list.at(i);
        //목록화면에 띄워준다.
        ui->listWidget->addItem(QString("%1").arg(fileInfo.fileName()));
    }
}


//파일을 열 때
void NotePad::on_FileOpenButton_clicked(){
    QString filename;

    //currentIndex가 지정되지 않았을때 오류가 발생한다->오류처리
    if(!ui->listWidget->currentIndex().isValid()){
        return ;
    }

    //리스트 위젯의 리스트에 아무것도 없으면 파일을 열수없다.
    if(ui->listWidget->count()==0){
        QMessageBox msgbox;
        msgbox.setText("No file on the list");
        msgbox.exec();
        return;
    }

    //파일이름을 현재 인덱스에 있는 파일이름을 받아온다.
    filename = QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());
    QFile file(filename);
    file.open(QIODevice::ReadOnly|QIODevice::Text);

    //읽어오기전 textEdit에 있는 내용들을 지운다
    ui->textEdit->clear();
    QTextStream read(&file);
    QString str;
    str=read.readAll();
    ui->textEdit->append(str);
    file.close();

    //파일이 열렷다는 메시지창을 보여준다
    QMessageBox msgBox;
    msgBox.setText("file open");
    msgBox.exec();
}


//파일 저장
void NotePad::on_FileSaveButton_clicked(){
    QString  filename;

    //리스트 위젯에 파일이 없을때 예외 처리
    if(ui->listWidget->count()==0){
        QMessageBox msgbox;
        msgbox.setText("No file on the list");
        msgbox.exec();
        return;
    }

    //파일을 지정 안했을 때 예외 처리
    if(!ui->listWidget->currentIndex().isValid()){
        QMessageBox msgbox;
        msgbox.setText("Select the file");
        msgbox.exec();
        return;
    }

    //파일 이름을 목록화면에서 마우스 클릭으로 지정된(currentIdex()가 그 역할을 한다) 파일의 이름을 (경로까지 포함해서) filename에 저장한다.
    filename=QString("%1").arg(list.at(ui->listWidget->currentIndex().row()).absoluteFilePath());

    QFile file(filename);
    QString result = ui->textEdit->toPlainText();
    file.open(QIODevice::WriteOnly|QIODevice::Text);

    //파일안에 textEdit의 내용을 저장한다.
    QTextStream save(&file);
    save<<result;
    file.close();

    //메시지창을 띄운다.
    QMessageBox msgbox;
    msgbox.setText("Save File");
    msgbox.exec();
}


// 창닫기
void NotePad::on_ExitButton_clicked(){
    this->close();
}


// 파일 리스트에 있는 파일 더블 클릭하면 파일 열기
void NotePad::on_listWidget_doubleClicked(const QModelIndex &index){
    //디렉토리(폴더 지정)을 지정해주지 않을 때 오류 처리
    if(dir.isEmpty()){
        QMessageBox msg;
        msg.setText("First direct path");
        msg.exec();
        return;
    }

    //위의 open 메서드와 동일한 방법
    QString path, filename;
    filename=QString("%1").arg(list.at(index.row()).absoluteFilePath());
    QFile file(filename);
    file.open(QIODevice::ReadOnly);
    ui->textEdit->clear();
    QTextStream read(&file);

    QString str;
    str=read.readAll();
    ui->textEdit->append(str);
    file.close();
}


//새로운 txt파일 만들기
void NotePad::on_newButton_clicked(){
    QString filename1=ui->lineEdit->text();

    //파일이름을 입력하지 않으면 파일을 입력하라고 메세지를 출력
    if(ui->lineEdit->text().isEmpty()){
        QMessageBox msgbox;
        msgbox.setText("Write the Filename");
        msgbox.exec();
        return;
    }

    //MyNote라는 폴더의 이름에다가 기본적으로 파일을 저장하려고 하기 때문에 폴더가 없다면 폴더를 만들어준다.
    QDir dirf("MyNote");
    if(!dirf.exists()){
        dirf.mkpath(".");
    }
    QFile file("MyNote\\"+filename1+".txt");
    bool suc=file.open(QIODevice::NewOnly);

    //동일한 이름의 파일이 있으면 파일이 열리지 않고 메시지 출력
    if(suc==false){
        QMessageBox msgbox;
        msgbox.setText("exist file Change fileName");
        msgbox.exec();
        return;
    }
    file.close();

    //MyNote 폴더로 경로를 바꿔주고 MyNote 폴더 안에 있는 파일들을 띄움(위의 방법과 동일함)
    dir=dirf;
    dirf.setFilter(QDir::Files|QDir::Hidden|QDir::NoSymLinks);
    ui->listWidget->clear();
    QFileInfoList listf=dirf.entryInfoList();

    list=listf;
    for(int i=0;i<listf.size();i++){
        QFileInfo fileInfo= listf.at(i);
        ui->listWidget->addItem(QString("%1").arg(fileInfo.fileName()));

    }
    ui->lineEdit->clear();
}
