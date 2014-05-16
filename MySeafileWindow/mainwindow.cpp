#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QMenu>
#include<QPalette>
#include<QColor>
#include<QLineEdit>
#include "flodsview.h"
#include "bodyview.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

//    ui->btn_Account->setIcon(QIcon(":/image/account.png"));
//    ui->btn_Account->setIconSize(QSize(32, 32));
//    account_menu_ = new QMenu();
//    ui->btn_Account->setMenu(account_menu_);

//    ui->btn_Account->setPopupMode(QToolButton::InstantPopup);

    //ui->wdg_header->setStyleSheet("QWidget { background-color: blue; }");
   // QColor backColor = QColor(14,148,246);


//    ui->wdg_header->setAutoFillBackground(true);
//    QPalette pal = ui->wdg_header->palette();
//    pal.setColor(QPalette::Window, backColor);//Qt::blue);
//    ui->wdg_header->setPalette(pal);

//    ui->wdg_tool->setAutoFillBackground(true);
//    backColor = QColor(220,232,248);
//    QPalette pal = ui->wdg_tool->palette();
//    pal.setColor(QPalette::Window, backColor);
//    ui->wdg_tool->setPalette(pal);

//     backColor = QColor(237,237,237);
//    ui->wdg_menu->setAutoFillBackground(true);

//     pal = ui->wdg_menu->palette();
//     pal.setColor(QPalette::Window, backColor);
//     ui->wdg_menu->setPalette(pal);

     //setWindowFlags (Qt::CustomizeWindowHint);
     //setWindowFlags (Qt::FramelessWindowHint);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_toolButton_10_clicked()
{
    isVisible=isVisible?false:true;
    ui->wdg_right->setVisible(isVisible);
}

void MainWindow::on_toolButton_11_clicked()
{
    bool isvis=ui->wdg_left->isVisible()?false:true;
    ui->wdg_left->setVisible(isvis);
}

void MainWindow::on_toolButton_2_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_clicked()
{
    FlodsView * flod=new FlodsView();
    flod->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox * qmb =new QMessageBox();
    qmb->setText(tr("main button right"));
    qmb->show();
}

void MainWindow::on_pbtn_E_clicked()
{
    BodyView * body=new BodyView();
    body->show();
}
