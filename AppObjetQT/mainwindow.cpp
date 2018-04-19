#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Etudiant.h"
#include "Prof.h"
#include "Administration.h"
#include <QLineEdit>
#include <iostream>
#include <QtSql>
#include <QDebug>
#include <QCoreApplication>
#include <QFileDialog>
#include <fstream>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	readCSV();
	AffichageList();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_etudiantAjout_clicked()
{
    Adresse* AdresseEtudiant = new Adresse(
        ui->adminAdresseNum->text().toInt(),
        ui->adminAdresseRue->text().toStdString(),
        ui->adminAdresseCodePostal->text().toStdString(),
        ui->adminAdresseVille->text().toStdString(),
        ui->adminAdressePays->text().toStdString());
                
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
    Adresse* AdresseProf = new Adresse(
        ui->adminAdresseNum->text().toInt(),
        ui->adminAdresseRue->text().toStdString(),
        ui->adminAdresseCodePostal->text().toStdString(),
        ui->adminAdresseVille->text().toStdString(),
        ui->adminAdressePays->text().toStdString());
                
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
    Adresse* AdresseAdmin = new Adresse(
        ui->adminAdresseNum->text().toInt(),
        ui->adminAdresseRue->text().toStdString(),
        ui->adminAdresseCodePostal->text().toStdString(),
        ui->adminAdresseVille->text().toStdString(),
        ui->adminAdressePays->text().toStdString()
	);
                
    Administration* AdminActuel = new Administration(
        ui->adminRole->currentText().toStdString(),
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
		AffichageList();

		updateCSV(
		AdminActuel->getRole(),
		AdminActuel->getNom(),
	  AdminActuel->getPrenom(),
			/*
	  AdresseActuelle->getNumeroRue(),
	  AdresseActuelle->getRue(),
	  AdresseActuelle->getCodePostal(),
	  AdresseActuelle->getVille(),
	  AdresseActuelle->getPays(),*/
	  AdminActuel->getEmail(),
	  AdminActuel->getTelephone(),
	  AdminActuel->getDateNaissance(),
	  AdminActuel->getNumCompteBancaire(),
	  AdminActuel->getEmailPro(),
	  AdminActuel->getTelFixPro(),
	  AdminActuel->getTelMobilePro(),
	  AdminActuel->getHoraires(),
	  AdminActuel->getContrat(),
	  AdminActuel->getTypeDePoste(),
	  AdminActuel->getSalaire(),
	  AdminActuel->getDateVirementSalaire(),
	  AdminActuel->getCongeRestant());

}

void MainWindow::on_pushButton_clicked()
{
	//ui->AdminListTextEdit->setText(QString::fromStdString(readCSV()));
}

void MainWindow::createCSV()
{
	ofstream myfile;
	myfile.open("DataAdministration.csv");
	myfile << "Role,Nom,Prenom,Email,Telephone,Date de Naissance,Numero Compte Bancaire,Email Professionel,Telephone fix Professionel,Telephone mobile Professionel,Horaires,Type de contrat,Type de poste,Salaire,Date virement de salaire,Conges restant";
	myfile << '\n';
	myfile.close();
}

void MainWindow::updateCSV(string role, string nom, string prenom, string email,
	int tel, string datenais, int numcombtebanc,
	string emailpro, int telfixpro, int telmobilpor,
	float horaires, string contra, string typedepost,
	float salaire, string datevirementsalaire,
	int congesRestant)
{
	ofstream myfile;
	myfile.open("DataAdministration.csv", std::ios_base::app);
	myfile << role <<',' << nom << ',' << prenom << ',' << email<< ',' <<tel<< ',' <<datenais<< ',' <<numcombtebanc<< ',' <<emailpro<< ',' <<telfixpro<< ',' <<telmobilpor<< ',' <<horaires<< ',' <<contra<< ',' <<typedepost<< ',' <<salaire<< ',' <<datevirementsalaire << ','<< congesRestant<<"\n";
	myfile.close();
}

void MainWindow::AffichageList()
{
	string line;
	ui->listWidget->clear();
	ifstream myfile("DataAdministration.csv");
	if (myfile.is_open())
	{
		int i;
		while (getline(myfile, line))
		{
			int i;
			cout << line << '\n';
			ui->listWidget->addItem(QString::fromStdString(line) /*+ QString::number(i)*/);
			i++;
			
		}
		myfile.close();
	}
}

string MainWindow::readCSV()
{
	string line;
	ifstream myfile("DataAdministration.csv");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();		
	}

	else cout << "Unable to open file";
	/*string hellooooo;
	ifstream myfile;
	myfile.open("test.csv");
	getline(myfile, hellooooo);
	myfile.close();
	return hellooooo;*/
	return "0";
}
