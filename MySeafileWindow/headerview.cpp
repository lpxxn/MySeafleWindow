#include "headerview.h"
#include "ui_headerview.h"

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
