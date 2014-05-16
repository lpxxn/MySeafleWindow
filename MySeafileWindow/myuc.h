#ifndef MYUC_H
#define MYUC_H

#include <QWidget>

namespace Ui {
class MyUc;
}

class MyUc : public QWidget
{
    Q_OBJECT

public:
    explicit MyUc(QWidget *parent = 0);
    ~MyUc();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::MyUc *ui;
};

#endif // MYUC_H
