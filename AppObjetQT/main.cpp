#include "mainwindow.h"
#include <QApplication>
#include <QtSql/QtSql>
#include <QDebug>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
	////
	QSqlDatabase db;
	db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("appobjet.database.windows.net:1433");
	db.setUserName("AdrienRichard@appobjet");
	db.setPassword("xxxxxx");
	db.setDatabaseName("tuto");

	if (db.open())
	{
		std::cout << "Vous êtes maintenant connecté à " << db.hostName().toStdString() << std::endl;
		db.close();
	}
	else
	{
		//QDebug() <<"problem";
		std::cout << "La connexion a échouée, désolé" << std::endl;
	}
    return a.exec();

}

