#ifndef HEADERVIEW_H
#define HEADERVIEW_H

#include <QWidget>

namespace Ui {
class HeaderView;
}

class HeaderView : public QWidget
{
    Q_OBJECT

public:
    explicit HeaderView(QWidget *parent = 0);
    ~HeaderView();

private:
    Ui::HeaderView *ui;
signals:
    void mouseLeftPress(QMouseEvent *);
    void mouseleftpressAfterMove(QMouseEvent *);
    void mousedoubleClickMaxWindow(QMouseEvent *);
    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

    // QWidget interface
protected:
    void mouseDoubleClickEvent(QMouseEvent *);
};

#endif // HEADERVIEW_H
