#include "nikonremoteui.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	NikonRemoteUI w;
	w.show();
	return a.exec();
}
