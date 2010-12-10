#ifndef WIATESTUI_H
#define WIATESTUI_H

#include <QtGui/QMainWindow>
#include "ui_nikonremoteui.h"

class NikonRemoteUI : public QMainWindow
{
	Q_OBJECT

public:
	NikonRemoteUI(QWidget *parent = 0, Qt::WFlags flags = 0);
	~NikonRemoteUI();

private:
	Ui::NikonRemoteUIClass ui;
};

#endif // WIATESTUI_H
