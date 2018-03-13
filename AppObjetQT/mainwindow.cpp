#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Etudiant.h"
#include "Prof.h"
#include "Administration.h"
#include <QLineEdit>
#include <iostream>
#include <QtSql/QtSql>
#include <QCoreApplication>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_etudiantAjout_clicked()
{
    Etudiant* EtudiantActuel = new Etudiant(
        ui->etudiantNom->text().toStdString(),
        ui->etudiantPrenom->text().toStdString(),
        ui->etudiantTelephone->text().toInt(),
        ui->etudiantEmail->text().toStdString(),
        ui->etudiantDateNaissance->text().toStdString(),
        ui->etudiantPromo->text().toInt(),
        ui->etudiantCV->text().toStdString(),
        ui->etudiantMontantScolarite->text().toInt(),
        ui->etudiantStageEntreprise->text().toStdString());
}


void MainWindow::on_profAjout_clicked()
{
    Prof* ProfActuel = new Prof(
        ui->profNom->text().toStdString(),
        ui->profPrenom->text().toStdString(),
        ui->profEmail->text().toStdString(),
        ui->profTelephone->text().toInt(),
        ui->profDateNaissance->text().toStdString(),
        ui->profNumCompteBancaire->text().toInt(),
        ui->profCasierJudiciaire->text().toStdString());
}

void MainWindow::on_adminAjout_clicked()
{
    Administration* AdminActuel = new Administration(
        ui->adminNom->text().toStdString(),
        ui->adminPrenom->text().toStdString(),
        ui->adminEmailPerso->text().toStdString(),
        ui->adminTelPerso->text().toInt(),
        ui->adminDateNaissance->text().toStdString(),
        ui->adminNumCompteBancaire->text().toInt(),
        ui->adminEmailPro->text().toStdString(),
        ui->adminTelFixPro->text().toInt(),
        ui->adminTelMobilePro->text().toInt(),
        ui->adminHoraires->text().toFloat(),
        ui->adminContrat->text().toStdString(),
        ui->adminTypePoste->text().toStdString(),
        ui->adminSalaire->text().toFloat(),
        ui->adminDateVirementSalaire->text().toStdString(),
        ui->adminCongeRestant->text().toInt());
}

void MainWindow::SQL() {
	#define q2c(string) string.toStdString()


    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("tuto");
    if(db.open())
    {
        std::cout << "Vous êtes maintenant connecté à " << q2c(db.hostName()) << std::endl;
        db.close();
    }
    else
    {
        std::cout << "La connexion a échouée, désolé" << std::endl;
    }

}

void MainWindow::on_pushButton_clicked()
{
    SQL();
}
