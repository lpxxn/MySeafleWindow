#include "flodsview.h"
#include "ui_flodsview.h"
#include<QLineEdit>
#include<QListWidget>
#include<QVBoxLayout>
#include<QDebug>
FlodsView::FlodsView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FlodsView)
{
    ui->setupUi(this);
    setWindowTitle(tr("File Viewer"));
    LineEditDir = new QLineEdit();
    LineEditDir->setText("/");
    ListWidgetFile = new QListWidget();

    QVBoxLayout *vbLayout = new QVBoxLayout( this );
    vbLayout->addWidget( LineEditDir );
    vbLayout->addWidget( ListWidgetFile );

    connect(LineEditDir,SIGNAL(returnPressed ()),this,SLOT(slotShow()));
    connect(ListWidgetFile,SIGNAL(itemDoubleClicked(QListWidgetItem * )),this,SLOT(slotShowDir(QListWidgetItem *)));

    QString root = "/";
    QDir rootDir(root);
    QStringList string;
    string << "*" ;
    QFileInfoList list=rootDir.entryInfoList (string);
    showFileInfoList(list);
}

FlodsView::~FlodsView()
{
    delete ui;
}

void FlodsView::showFileInfoList(QFileInfoList list)
{
    ListWidgetFile->clear();
    for(unsigned int i=0;i<list.count();i++)
    {
        QFileInfo tmpFileInfo=list.at(i);
        if((tmpFileInfo.isDir()))
        {
            QIcon icon(":/res/dir.png");

            QString fileName=tmpFileInfo.fileName();

            QListWidgetItem *tmp=new QListWidgetItem (icon,fileName);

            ListWidgetFile->addItem(tmp);

        }
        else if(tmpFileInfo.isFile())
        {
            QIcon icon(":/res/file.png");
            QString fileName=tmpFileInfo.fileName();
            QListWidgetItem *tmp=new QListWidgetItem (icon,fileName);
            ListWidgetFile->addItem(tmp);

        }
    }
}

void FlodsView::slotShowDir(QListWidgetItem *item)
{
    QString str=item->text();
    QDir dir;
    dir.setPath(LineEditDir->text());
    dir.cd(str);
    LineEditDir->setText(dir.absolutePath());
    slotShow(dir);
}

void FlodsView::slotShow(QDir dir)
{
    QStringList string;
    string << "*" ;
    qDebug() << "FileViewer::slotShow count = " << dir.count();
    QFileInfoList list=dir.entryInfoList (string,QDir::AllEntries,QDir::DirsFirst);
    showFileInfoList(list);
}
