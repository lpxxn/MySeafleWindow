#include "headerview.h"
#include "ui_headerview.h"
#include<QMouseEvent>
HeaderView::HeaderView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HeaderView)
{
    ui->setupUi(this);
}

HeaderView::~HeaderView()
{
    delete ui;
}

void HeaderView::mousePressEvent(QMouseEvent * event)
{
    if (event->button() == Qt::LeftButton) {
           emit mouseLeftPress(event);
        }
}

void HeaderView::mouseMoveEvent(QMouseEvent * event)
{
    if (event->buttons() & Qt::LeftButton) {
           emit mouseleftpressAfterMove(event);
    }
}

void HeaderView::mouseDoubleClickEvent(QMouseEvent * event)
{
    emit mousedoubleClickMaxWindow(event);
}
