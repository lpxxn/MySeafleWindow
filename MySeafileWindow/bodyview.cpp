#include "bodyview.h"
#include "ui_bodyview.h"
#include <QTableView>
#include <QHeaderView>
#include <QSplitter>
#include<QVBoxLayout>
#include "itemmodel.h"
#include "itemobject.h"
#include "QItemSelectionModel"
#include "mylistitemdelegege.h"
#include<QListView>
#include<QTreeView>
#include<QDebug>
#include<QListWidget>
#include<QPixmap>

void BodyView::GetData(QList<ItemObject* > &data)
{
    QString strPath(":/image/folder.png");
    for(int i=0;i<5;i++)
    {
        ItemObject* item=new ItemObject();
        item->setName("name"+QString::number(i));
        item->setDesc("desc"+QString::number(i));
        item->setMyIcon(strPath);
        for(int j=0;j<i+1;j++)
        {
            ItemObject* child=new ItemObject(item);
            child->setName("child "+QString::number(j));
            child->setMyIcon(strPath);
            item->appendChild(child);
        }
        data.append(item);
    }
}

BodyView::BodyView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BodyView)
{
    ui->setupUi(this);

    QString imagepath = ":/image/folder.png";
    QPixmap image0(imagepath);
    QPixmap image = image0.scaled(QSize(100,100));
    qDebug() << image.size();
    QIcon myIcon =  QIcon(image);


      QSplitter *page= new QSplitter();
        ui->layoutH->addWidget(page);
      //customer
      QList<QVariant> title;
      title<<"one"<<"two";

      QList<ItemObject*> values;
      GetData(values);
      ItemModel * data =new ItemModel(Q_NULLPTR);
      data->setHeaderTitle(title);
      data->BindingData(values);
      QItemSelectionModel *selections = new QItemSelectionModel(data);

      QTableView *table = new QTableView;
      table->setModel(data);
      table->setSelectionModel(selections);
      table->horizontalHeader()->setSectionsMovable(true);
      table->verticalHeader()->setSectionsMovable(true);
      // Set StaticContents to enable minimal repaints on resizes.
      table->viewport()->setAttribute(Qt::WA_StaticContents);
      page->addWidget(table);

      QListView *list = new QListView;
      //QObject::connect(list,SIGNAL(doubleClicked(QModelIndex),this,SLOT(doubleClicked(QModelIndex))));
      list->setModel(data);
      list->setIconSize(QSize(80,80));

      list->setItemDelegate(new MyListItemDelegege());
      list->setSelectionModel(selections);
      list->setSpacing(5);
      list->setViewMode(QListView::IconMode);
      list->setDragEnabled(false);
      list->setSelectionRectVisible(false);
      //list->setSelectionMode(QAbstractItemView::ExtendedSelection);
      list->setAlternatingRowColors(false);
      list->setResizeMode(QListWidget::Adjust);
      //list->viewport()->setAttribute(Qt::WA_StaticContents);

      list->setAttribute(Qt::WA_MacShowFocusRect, true);
      page->addWidget(list);

}

BodyView::~BodyView()
{
    delete ui;
}
