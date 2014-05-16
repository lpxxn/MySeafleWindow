#include "mycustombase.h"




MyCustomBase::MyCustomBase(QObject *parent)
{

}

QString MyCustomBase::name() const
{
    return "MyCustomeDeomo";
}

QString MyCustomBase::includeFile() const
{
    return "myuc.h";
}

QString MyCustomBase::group() const
{
    return tr("Image Manipulation Widgets");
}

QIcon MyCustomBase::icon() const
{

}

QString MyCustomBase::toolTip() const
{
    return tr("An icon editor widget");
}

QString MyCustomBase::whatsThis() const
{
    return tr("This widget is presented in Chapter 5 of <i>C++ GUI "
                  "Programming with Qt 4</i> as an example of a custom Qt "
                  "widget.");

}

bool MyCustomBase::isContainer() const
{
    return false;
}

QWidget *MyCustomBase::createWidget(QWidget *parent)
{
    return new IconEditor(parent);
}
Q_EXPORT_PLUGIN2(mycustombase, mycustombase)
