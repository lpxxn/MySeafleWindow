#ifndef RIGHTDOCKVIEW_H
#define RIGHTDOCKVIEW_H

#include <QWidget>

namespace Ui {
class RightDockView;
}

class RightDockView : public QWidget
{
    Q_OBJECT

public:
    explicit RightDockView(QWidget *parent = 0);
    ~RightDockView();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::RightDockView *ui;
};

#endif // RIGHTDOCKVIEW_H
