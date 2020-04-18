#ifndef ALRAM_H
#define ALRAM_H

#include <QDialog>
#include<QTimer>
namespace Ui {
class Alram;
}

class Alram : public QDialog
{
    Q_OBJECT

public:
    explicit Alram(QWidget *parent = nullptr);
    ~Alram();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Alram *ui;
};

#endif // ALRAM_H
