#include <QApplication>

#include "myserver.h"

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);

	MyServer server;

	return app.exec();
}