#ifndef BODYVIEW_H
#define BODYVIEW_H

#include <QWidget>
#include "itemobject.h"
namespace Ui {
class BodyView;
}

class BodyView : public QWidget
{
    Q_OBJECT

public:
    explicit BodyView(QWidget *parent = 0);
    ~BodyView();
    void GetData(QList<ItemObject* > &data);
private:
    Ui::BodyView *ui;
};

#endif // BODYVIEW_H
