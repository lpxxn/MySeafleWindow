#include "rightdockview.h"
#include "ui_rightdockview.h"
#include<QMessageBox>
RightDockView::RightDockView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RightDockView)
{
    ui->setupUi(this);
}

RightDockView::~RightDockView()
{
    delete ui;
}

void RightDockView::on_pushButton_2_clicked()
{
    QMessageBox * qb =new QMessageBox();
    qb->setText(tr("right button"));
    qb->show();
}
