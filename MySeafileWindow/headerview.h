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
};

#endif // HEADERVIEW_H
