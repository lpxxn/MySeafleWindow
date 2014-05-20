#ifndef MYLISTITEMDELEGEGE_H
#define MYLISTITEMDELEGEGE_H

#include <QStyledItemDelegate>

class MyListItemDelegege : public QStyledItemDelegate
{
    Q_OBJECT


signals:

public slots:



public:
    explicit MyListItemDelegege(QString strDipslay ,QString strIocPath,QObject *parent = 0);

    // QAbstractItemDelegate interface
    QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void paint(QPainter* painter,const QStyleOptionViewItem& option,const QModelIndex& index) const;
private:
    QString dispName;
    QIcon dispICon;
};

#endif // MYLISTITEMDELEGEGE_H
