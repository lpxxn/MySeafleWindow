#include "leftdockview.h"
#include "ui_leftdockview.h"
#include "mylistitemdelegege.h"
LeftDockView::LeftDockView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LeftDockView)
{
    ui->setupUi(this);
    SetListData();
}

LeftDockView::~LeftDockView()
{
    delete ui;
}

void LeftDockView::SetListData()
{
    QListWidgetItem * item = new QListWidgetItem(QIcon(":/image/list1.png"),QStringLiteral("ȫ���ĵ�"));
    item->setSizeHint(QSize(50,25));
    ui->lv->addItem(item);


    ui->lv->setItemDelegateForRow(1,new MyListItemDelegege(QStringLiteral("ͼƬ"),":/image/list2.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);
    ui->lv->setItemDelegateForRow(2,new MyListItemDelegege(QStringLiteral("��Ƶ"),":/image/list3.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);

    ui->lv->setItemDelegateForRow(3,new MyListItemDelegege(QStringLiteral("����"),":/image/list4.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);

    ui->lv->setItemDelegateForRow(4,new MyListItemDelegege(QStringLiteral("����"),":/image/list5.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);

    ui->lv->setItemDelegateForRow(5,new MyListItemDelegege(QStringLiteral("����"),":/image/list6.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);

    item = new QListWidgetItem(QIcon(":/image/list8.png"),QStringLiteral("�ҵķ���"));
    item->setSizeHint(QSize(50,25));
    ui->lv->addItem(item);
}
