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
	////
	QSqlDatabase db;
	db = QSqlDatabase::addDatabase("QSQLMYSQL");
	/*db.setHostName("mysql-wolfla.alwaysdata.net");
	db.setUserName("wolfla");
	db.setPassword("paflloma1272");
	db.setDatabaseName("wolfla_appobjet");*/
	db.setHostName("localhost");
	db.setUserName("root");
	db.setPassword("");
	db.setDatabaseName("wolfla_appobjet");

	if (db.open())
	{
		std::cout << "Vous etes maintenant connecte a " << db.hostName().toStdString() << std::endl;
		db.close();
	}
	else
	{
		//QDebug() <<"problem";
		std::cout << "La connexion a echouee, desole" << std::endl;
		QMessageBox::critical(0, QObject::tr("Database Error"), db.lastError().text());
	}

    return a.exec();

}

