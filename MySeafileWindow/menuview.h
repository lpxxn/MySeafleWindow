#ifndef MENUVIEW_H
#define MENUVIEW_H

#include <QWidget>

namespace Ui {
class MenuView;
}

class MenuView : public QWidget
{
    Q_OBJECT

public:
    explicit MenuView(QWidget *parent = 0);
    ~MenuView();

private:
    Ui::MenuView *ui;
};

#endif // MENUVIEW_H
