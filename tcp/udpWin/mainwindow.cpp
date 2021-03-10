#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Chat Room");

    sender = new QUdpSocket(this);
    receiver = new QUdpSocket(this);
    receiver->bind(6666, QUdpSocket::ShareAddress);
    connect(receiver, SIGNAL(readyRead()), this, SLOT(ReadMessagee()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ReadMessage()
{
    while(receiver->hasPendingDatagrams()){
        QByteArray datagram;
        datagram.resize(receiver->pendingDatagramSize());
        receiver->readDatagram(datagram.data(), datagram.size());
        text2.clear();
        text2.prepend(datagram);
        ui->label->setText(text2);
    }

}

void MainWindow::SendMessage()
{
    text1 = ui->textEdit->toPlainText();
    QByteArray datagram = text1.toUtf8();
    sender->writeDatagram(datagram.data(), datagram.size(), QHostAddress("127.0.0.1"), 5555);

}


void MainWindow::on_pushButton_clicked()
{
    SendMessage();
}
