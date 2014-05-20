#include "mylistitemdelegege.h"
#include<QPainter>
#include<QString>

MyListItemDelegege::MyListItemDelegege(QString strDipslay ,QString strIocPath,QObject *parent) :
    QStyledItemDelegate(parent),dispName(strDipslay),dispICon(strIocPath)
{
}

void MyListItemDelegege::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QStyleOptionViewItem asitem;

    //默认Itemobject的内容
    QStyledItemDelegate::paint(painter, option, index);
    painter->save();
    QRect iconRange=QRect(option.rect.topLeft()+QPoint(30,5),QSize(15,15));
    painter->drawPixmap(iconRange,dispICon.pixmap(QSize(15,15)));
    QFontMetrics fm(painter->font());
    QRect strRect = QRect(option.rect.topLeft()+QPoint(52,7),QSize(fm.width(dispName),fm.height()));
    painter->drawText(strRect,dispName);
    //icon
}

QSize MyListItemDelegege::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    //return QSize(90, 100);
    return QSize(50, 25);
}
