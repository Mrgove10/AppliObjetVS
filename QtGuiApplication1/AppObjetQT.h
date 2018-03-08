#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AppObjetQT.h"

class AppObjetQT : public QMainWindow
{
	Q_OBJECT

public:
	AppObjetQT(QWidget *parent = Q_NULLPTR);

private:
	Ui::AppObjetQTClass ui;
};
