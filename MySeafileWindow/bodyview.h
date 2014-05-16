#ifndef BODYVIEW_H
#define BODYVIEW_H

#include <QWidget>
#include<QTableView>
#include<QListView>
#include "itemobject.h"
#include "itemmodel.h"
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
    ItemModel * data;
    QTableView *table;
    QListView *list;
};

#endif // BODYVIEW_H
