#include "alram.h"
#include "ui_alram.h"

Alram::Alram(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Alram)
{
    ui->setupUi(this);
}

Alram::~Alram()
{
    delete ui;
}

void Alram::on_pushButton_clicked()
{   //QTimer *timer= new QTimer(this);
    //connect(timer, SIGNAL(timeout()),this,SLOT(update()));
    //timer->start(1000);
    //QTimer::singleShot(6000,this,SLOT(quit()));
}
