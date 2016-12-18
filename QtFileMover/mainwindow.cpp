#include <QtWidgets>
#include "MainWindow.h"


MainWindow::MainWindow()
{
    QWidget *uiContainer = new QWidget;
    setCentralWidget(uiContainer);
    QVBoxLayout *layout = new QVBoxLayout;

    uiContainer->setLayout(layout);
    layout->setMargin(5);
    //layout->addWidget(infoLabel);
    createActions();
    createMenus();

    setWindowTitle(tr("Qt File Mover"));
    setMinimumSize(160, 160);
    resize(480, 320);
}

void MainWindow::about()
{
    QMessageBox::about(this, tr("About Menu"),
            tr("The <b>Menu</b> example shows how to create "
               "menu-bar menus and context menus."));
}

void MainWindow::justify()
{
    QMessageBox::about(this, tr("About Menu"),
            tr("Justify"));
}

void MainWindow::createActions()
{
    //Action about
    aboutAct = new QAction(tr("&About"), this);
    aboutAct->setStatusTip(tr("Show the application's About box"));
    connect(aboutAct, &QAction::triggered, this, &MainWindow::about);

    //Action justify
    justifyAct = new QAction(tr("&Justify"), this);
    justifyAct->setCheckable(true);
    justifyAct->setShortcut(tr("Ctrl+J"));
    justifyAct->setStatusTip(tr("Justify the selected text"));
    connect(justifyAct, &QAction::triggered, this, &MainWindow::justify);
}

void MainWindow::createMenus()
{
    //"Help" main menu
    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAct);
    helpMenu->addSeparator()->setText(tr("Alignment"));
    helpMenu->addAction(justifyAct);
}
