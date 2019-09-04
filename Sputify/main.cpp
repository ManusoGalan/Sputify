#include "Sputify.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Sputify w;
	w.show();
	return a.exec();
}
