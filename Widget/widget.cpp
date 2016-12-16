#include <QApplication> 
#include <QWidget> 
#include <QPushButton> 

int main(int argc, char *argv[]) 
{ 
    QApplication a(argc, argv); 
    // The QWidget class is the base class of all user interface objects
    QWidget mainWin;
    mainWin.setMininumsSize(200, 100);
    mainWin.setMaxinumsSize(200, 100);

    QPushButton button("Hello", &mainWin);
    button.setGeometry(20, 20, 160, 160);
    a.setMainWidget(&mainWin)
    mainWin.show();
    return a.exec(); 
}