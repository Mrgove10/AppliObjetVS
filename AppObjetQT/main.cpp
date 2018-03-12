#include "mainwindow.h"
#include <QApplication>
#include <QtSql/QtSql>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();

}


/*void SQL(){
    QString connectionString = "Driver={ODBC Driver 13 for SQL Server};"
                               "Server=tcp:appobjet.database.windows.net,1433;"
                               "Database=Appobjet;"
                               "Uid=AdrienRichard@appobjet;"
                               "Pwd="""";"
                               "Encrypt=yes;"
                               "TrustServerCertificate=no;"
                               "Connection Timeout=30;";

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC", mydb);
    db.setDatabaseName(connectionString);

    if (db.open())
    {
        //return true;
        cout << true<<endl;
    }
    else
    {
        QString error = db.lastError().text();
        //return false;
        cout << false<<endl;
    }
}*/
