#ifndef BODYVIEW_H
#define BODYVIEW_H

#include <QWidget>
#include<QTableView>
#include<QListView>
#include "itemobject.h"
#include "itemmodel.h"
#include<QPoint>
#include<QItemSelectionModel>
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
    QItemSelectionModel *selections;
public slots:
  void CustomTableMenuRequested(QPoint pos);
  void CustomListMenuRequested(QPoint pos);
  void SwitchView();

  // QWidget interface
protected:
  void resizeEvent(QResizeEvent *);
};

#endif // BODYVIEW_H
