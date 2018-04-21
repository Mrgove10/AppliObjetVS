#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Etudiant.h"
#include "Prof.h"
#include "Administration.h"
#include <QLineEdit>
#include <iostream>
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
	AffichageTotal();
}

MainWindow::~MainWindow()
{
    delete ui;
}

#pragma region Etudiants
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

	AffichageTotal();

}

void MainWindow::AffichageListEtudiants()
{
	string line;
	ui->listWidgetEtudiants->clear();
	ifstream myfile("Data/DataEtudiants.csv");
	if (myfile.is_open())
	{
		int i;
		while (getline(myfile, line))
		{
			int i;
			cout << line << '\n';
			ui->listWidgetEtudiants->addItem(QString::fromStdString(line) /*+ QString::number(i)*/);
			i++;

		}
		myfile.close();
	}
}

void MainWindow::updateCSVEtudiants(string nom, string prenom, int telephone,
	string mail, string datenaissance, string promo,
	string CV, int montantScolariter, string stageEntreprise)
{
	//TODO Adresse
	ofstream myfile;
	myfile.open("Data/DataEtudiants.csv", std::ios_base::app);
	myfile << nom <<','<<prenom<<','<<telephone<<','<<mail<<','<<datenaissance<<','<<promo<<','<<CV<<','<<montantScolariter<<','<<stageEntreprise<< "\n";
	myfile.close();
}

void MainWindow::createCSVEtudiants()
{
	ofstream myfile;
	myfile.open("Data/DataEtudiants.csv");
	myfile << "Nom,Prenom,Telephone,Mail,Date de Naissance,Promo,CV,Montant de la Scolariter,Entreprise de Stage";
	myfile << '\n';
	myfile.close();
}

#pragma endregion 

#pragma region Profs
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

	AffichageTotal();

}

void MainWindow::AffichageListProfs()
{
	string line;
	ui->listWidgetProfs->clear();
	ifstream myfile("DataProfs.csv");
	if (myfile.is_open())
	{
		int i;
		while (getline(myfile, line))
		{
			int i;
			cout << line << '\n';
			ui->listWidgetProfs->addItem(QString::fromStdString(line) /*+ QString::number(i)*/);
			i++;

		}
		myfile.close();
	}
}

void MainWindow::updateCSVProfs()
{
	ofstream myfile;
	myfile.open("Data/DataProfs.csv", std::ios_base::app);
	myfile << "\n";
	myfile.close();
}

void MainWindow::createCSVProfs()
{
	ofstream myfile;
	myfile.open("Data/DataProfslephone,Date de Naissance,Numero Compte Bancaire,Email Professionel,Telephone fix Professionel,Telephone mobile Professionel,Horaires,Type de contrat,Type de poste,Salaire,Date virement de salaire,Conges restant");
	myfile << '\n';
	myfile.close();
}

#pragma endregion 

#pragma region Admininstration
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
		AffichageTotal();

		updateCSVAdmins(
		AdminActuel->getRole(),
		AdminActuel->getNom(),
	  AdminActuel->getPrenom(),
			//TODO ICI FAIT LES ADRESSE
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

void MainWindow::updateCSVAdmins(string role, string nom, string prenom, string email,
	int tel, string datenais, int numcombtebanc,
	string emailpro, int telfixpro, int telmobilpor,
	float horaires, string contra, string typedepost,
	float salaire, string datevirementsalaire,
	int congesRestant)
{
	ofstream myfile;
	myfile.open("DataAdministration.csv", std::ios_base::app);
	myfile << role << ',' << nom << ',' << prenom << ',' << email << ',' << tel << ',' << datenais << ',' << numcombtebanc << ',' << emailpro << ',' << telfixpro << ',' << telmobilpor << ',' << horaires << ',' << contra << ',' << typedepost << ',' << salaire << ',' << datevirementsalaire << ',' << congesRestant << "\n";
	myfile.close();
}

void MainWindow::AffichageListAdmins()
{
	string line;
	ui->listWidgetAdmins->clear();
	ifstream myfile("DataAdministration.csv");
	if (myfile.is_open())
	{
		int i;
		while (getline(myfile, line))
		{
			int i;
			cout << line << '\n';
			ui->listWidgetAdmins->addItem(QString::fromStdString(line) /*+ QString::number(i)*/);
			i++;

		}
		myfile.close();
	}
}

void MainWindow::createCSVAdmins()
{
	ofstream myfile;
	myfile.open("Data/DataAdministration.csv");
	myfile << "Role,Nom,Prenom,Email,Telephone,Date de Naissance,Numero Compte Bancaire,Email Professionel,Telephone fix Professionel,Telephone mobile Professionel,Horaires,Type de contrat,Type de poste,Salaire,Date virement de salaire,Conges restant";
	myfile << '\n';
	myfile.close();
}

#pragma endregion 

void MainWindow::AffichageTotal()
{
	AffichageListAdmins();
	AffichageListEtudiants();
	AffichageListProfs();
}

//TODO DUplicate

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
