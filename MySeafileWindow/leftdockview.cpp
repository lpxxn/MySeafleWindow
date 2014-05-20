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
    QListWidgetItem * item = new QListWidgetItem(QIcon(":/image/list1.png"),QStringLiteral("全部文档"));
    item->setSizeHint(QSize(50,25));
    ui->lv->addItem(item);


    ui->lv->setItemDelegateForRow(1,new MyListItemDelegege(QStringLiteral("图片"),":/image/list2.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);
    ui->lv->setItemDelegateForRow(2,new MyListItemDelegege(QStringLiteral("视频"),":/image/list3.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);

    ui->lv->setItemDelegateForRow(3,new MyListItemDelegege(QStringLiteral("种子"),":/image/list4.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);

    ui->lv->setItemDelegateForRow(4,new MyListItemDelegege(QStringLiteral("音乐"),":/image/list5.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);

    ui->lv->setItemDelegateForRow(5,new MyListItemDelegege(QStringLiteral("其它"),":/image/list6.png"));
    item = new QListWidgetItem();
    ui->lv->addItem(item);

    item = new QListWidgetItem(QIcon(":/image/list8.png"),QStringLiteral("我的分享"));
    item->setSizeHint(QSize(50,25));
    ui->lv->addItem(item);
}
