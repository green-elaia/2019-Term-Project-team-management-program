#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QDialog>
#include<QFileDialog>
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
#include<QString>

namespace Ui {
class NotePad;
}

class NotePad : public QDialog
{
    Q_OBJECT

public:
    explicit NotePad(QWidget *parent = nullptr);
    ~NotePad();

private slots:
    //폴더를 지정하면 폴더 안에 있는 파일들 보여주는 버튼
    void on_DirectoryButton_clicked();
    //txt파일안에 있는 내용 불러오기
    void on_FileOpenButton_clicked();
    //파일내용 지정해준 파일 안에 저장하기
    void on_FileSaveButton_clicked();
    //메모장 나가기
    void on_ExitButton_clicked();
    //목록에 있는 파일 이름 더블클릭하면
    void on_listWidget_doubleClicked(const QModelIndex &index);
    void on_newButton_clicked();

private:
    Ui::NotePad *ui;
    //디렉토리를 저장할 변수
    QDir dir;
    //폴더안에 있는 파일 목록 저장할 수 있는 변수
    QFileInfoList list;
};

#endif // NOTEPAD_H
