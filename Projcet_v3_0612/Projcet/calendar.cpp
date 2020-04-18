#include "calendar.h"
#include "ui_calendar.h"

calendar::calendar(QWidget *parent) : QDialog(parent), ui(new Ui::calendar){
    ui->setupUi(this);

    //SQLITE3를 사용하여 데이터베이스 생성.
    //해당 폴더에 데이터베이스 파일을 만들어줌.
    QString sql = "QSQLITE";
    QSqlDatabase db = QSqlDatabase::addDatabase(sql);
    db.setDatabaseName("data.db");

    if(!db.open()){
        QSqlDatabase::removeDatabase("db");
    }
    QSqlQuery query(db);

    //테이블을 생성
    query.exec("create table note"
               "(id integer primary key autoincrement," "date varchar(100)," "task varchar(500))");
}


calendar::~calendar(){
    delete ui;
}


void calendar::on_Open_clicked(){

    QSqlQuery query;
    QString exeq;
    int exist = 0;

    //사용자가 Open 버튼을 누르면, Query를 날려 해당 날짜에 해당하는 데이터를 가져온다.
    query.clear();
    exeq = "select * from note where date ='" + ui->calendarWidget->selectedDate().toString() + "';";
    query.exec(exeq);
    ui->Task->clear();
    ui->TaskDate->setText(ui->calendarWidget->selectedDate().toString());

    while(query.next()){
        ui->Task->clear();
        ui->Task->append(query.value("task").toString());
        exist = 1;
    }

    if(!exist){
        ui->Task->setPlainText("Empty Contents");
        qWarning() << "None";
    }
}


void calendar::on_Save_clicked(){
    QSqlQuery query(db);
    QString exeq;

    //해당 형식의 데이터 값을 넣어준다.
    query.clear();
    exeq = "insert into note (date, task) values ('" + ui->calendarWidget->selectedDate().toString()+"', '"+ui->Task->toPlainText()+"');";
    ui->Task->clear();
    qDebug()<<query.exec(exeq);
}


void calendar::on_Exit_clicked(){
    db.close();
    this->close();
}


void calendar::on_calendarWidget_selectionChanged(){
    //날짜를 이동시켜주면, TaskDate 창에 있는 문자열을 삭제해준다.
    ui->TaskDate->clear();
    ui->Task->clear();
}


void calendar::on_Erase_clicked(){
    //query를 날려 데이터를 삭제한다.
    QSqlQuery query(db);
    QString exeq;
    query.clear();
    exeq = "delete from note where date = '" + ui->calendarWidget->selectedDate().toString()+"';";
    ui->Task->clear();
    qDebug()<<query.exec(exeq);
}
