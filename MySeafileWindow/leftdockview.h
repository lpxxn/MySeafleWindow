#ifndef LEFTDOCKVIEW_H
#define LEFTDOCKVIEW_H

#include <QListWidgetItem>
#include <QWidget>

namespace Ui {
class LeftDockView;
}

class LeftDockView : public QWidget
{
    Q_OBJECT

public:
    explicit LeftDockView(QWidget *parent = 0);
    ~LeftDockView();
    void SetListData();
private:
    Ui::LeftDockView *ui;
};

//class MyItemWidget:public QListWidgetItem
//{
//    Q_OBJECT

//public:
//    explicit MyItemWidget(QWidget *parent = 0);
//    ~MyItemWidget();
//};

#endif // LEFTDOCKVIEW_H
