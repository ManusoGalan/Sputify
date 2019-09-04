#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Sputify.h"

class Sputify : public QMainWindow
{
	Q_OBJECT

public:
	Sputify(QWidget *parent = Q_NULLPTR);

private:
	Ui::SputifyClass ui;
};
