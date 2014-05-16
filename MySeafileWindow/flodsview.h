#ifndef FLODSVIEW_H
#define FLODSVIEW_H

#include <QDialog>
#include<QDir>
#include<QFileInfoList>
namespace Ui {
class FlodsView;
}
class QLineEdit;
class QListWidget;

class QListWidgetItem;
class FlodsView : public QDialog
{
    Q_OBJECT

public:
    explicit FlodsView(QWidget *parent = 0);
    ~FlodsView();
    QLineEdit* LineEditDir;
    QListWidget* ListWidgetFile;
private:
    Ui::FlodsView *ui;
public:
    void showFileInfoList(QFileInfoList list);
public slots:
    void slotShowDir(QListWidgetItem * item);
    void slotShow(QDir dir);
};

#endif // FLODSVIEW_H
