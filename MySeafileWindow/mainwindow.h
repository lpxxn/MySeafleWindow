#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QMenu;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_toolButton_10_clicked();

    void on_toolButton_11_clicked();

    void on_toolButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pbtn_E_clicked();

private:
    Ui::MainWindow *ui;
    QMenu *account_menu_;
    bool isVisible;
};

#endif // MAINWINDOW_H
