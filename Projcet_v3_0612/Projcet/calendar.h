#ifndef CALENDAR_H
#define CALENDAR_H

#include <QDialog>
#include <QtSql/QtSql>

namespace Ui {
class calendar;
}

class calendar : public QDialog
{
    Q_OBJECT

public:
    explicit calendar(QWidget *parent = nullptr);
    ~calendar();

private slots:
    void on_Open_clicked();
    void on_Save_clicked();
    void on_Exit_clicked();
    void on_calendarWidget_selectionChanged();
    void on_Erase_clicked();

private:
    Ui::calendar *ui;
    QSqlDatabase db;
};

#endif // CALENDAR_H
