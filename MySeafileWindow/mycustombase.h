#ifndef MYCUSTOMBASE_H
#define MYCUSTOMBASE_H

#include <QDesignerCustomWidgetInterface>

class MyCustomBase :public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)
    Q_PLUGIN_METADATA(IID IconEditorPlugin_iid FILE "myucplugin.json")
public:
    MyCustomBase(QObject *parent = 0);
    QString name() const;
        QString includeFile() const;
        QString group() const;
        QIcon icon() const;
        QString toolTip() const;
        QString whatsThis() const;
        bool isContainer() const;
        QWidget *createWidget(QWidget *parent);
};

#endif // MYCUSTOMBASE_H
