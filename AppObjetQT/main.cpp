#include "mainwindow.h"
#include <QApplication>
#include <QtSql/QtSql>
#include <QDebug>
#include <iostream>
#include <QMessageBox>
using namespace std;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
	
    return a.exec();

}

