#ifndef GAMBLE_H
#define GAMBLE_H

#include<QDialog>
#include<vector>
#include<string>
#include<ctime>
#include<QMessageBox>
#include<QTextCodec>

using namespace std;

namespace Ui {
class Gamble;
}

class Gamble : public QDialog
{
    Q_OBJECT

public:
    explicit Gamble(QWidget *parent = nullptr);
    ~Gamble();

private slots:
    //팀원 추가
    void on_pushButtoTMAdd_clicked();
    //팀원 목록에서 삭제
    void on_pushButtoTMremove_clicked();
    //리더 선출
    void on_teamLeaderButton_clicked();
    //목록 지우기
    void on_clearButton_clicked();

private:
    Ui::Gamble *ui;
    //팀원을 랜덤하게 뽑게해주는 메소드
    QString doGamble(int r);
};

#endif // GAMBLE_H
