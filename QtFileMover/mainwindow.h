#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAction;
class QActionGroup;
class QLabel;
class QMenu;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

private slots:
    void about();
    void justify();

private:
    void createActions();
    void createMenus();

    QMenu *helpMenu;

    QAction *aboutAct;
    QAction *justifyAct;
};

#endif // MAINWINDOW_H
