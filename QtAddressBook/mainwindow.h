#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"addressbookcontroller.h"
#include <QHash>


namespace Ui {
class MainWindow;
}

class QListWidgetItem;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(AddressBookController *controller, QWidget *parent = 0);
    ~MainWindow();

public slots:
    void createEntry();
    void deleteEntry();

private:
    Ui::MainWindow *ui;
    AddressBookController *m_controller;
    QHash<QListWidgetItem*, AddressBookEntry*> m_entryMap;

    void setupConnections();
};

#endif // MAINWINDOW_H
