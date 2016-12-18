#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(AddressBookController *controller, QWidget *parent) :
            QMainWindow(parent),ui(new Ui::MainWindow),m_controller(controller)
{
    Q_ASSERT(controller);
    ui->setupUi(this);

    setupConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createEntry()
{
    auto entry = m_controller->createEntry();
    if (entry)
    {
        ui->listWidget->addItem(entry->name());
        auto listItem = ui->listWidget->item(ui->listWidget->count() - 1);
        m_entryMap.insert(listItem, entry);
    }
}

void MainWindow::deleteEntry()
{
    auto listItem = ui->listWidget->currentItem();
    if(listItem){
        auto entry = m_entryMap.value(listItem);
        if(entry)
        {
            if(m_controller->deleteEntry(entry))
            {
                m_entryMap.remove(listItem);
                delete listItem;
            }
        }
    }
}

void MainWindow::setupConnections()
{
    connect(ui->actionAdd, SIGNAL(triggered(bool)), this, SLOT(createEntry()));
    connect(ui->actionRemove, &QAction::triggered, this, &MainWindow::deleteEntry);
}
