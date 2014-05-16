#include "myuc.h"
#include "ui_myuc.h"

MyUc::MyUc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyUc)
{
    ui->setupUi(this);
}

MyUc::~MyUc()
{
    delete ui;
}

void MyUc::on_pushButton_3_clicked()
{

}
