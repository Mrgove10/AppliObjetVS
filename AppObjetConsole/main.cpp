// AppObjetConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Administration.h"
#include "Adresse.h"
#include "Autoentrepreneur.h"
#include "Employe.h"
#include "Etudiant.h"
#include "ModuleCours.h"
#include "Prof.h"
#include "RelevéNotes.h"
#include <iostream>
#include <fstream>
#include "stdafx.h"
#include "targetver.h"
#include <string>
using namespace std;


///
#pragma region Etudiants
void AjoutEtudiants()
{
	string cintesta;
	string cintestb;
	cout << "testA : ";
	cin >> cintesta;
	system("CLS");
	cout << "testA : " << cintesta << endl;
	cout << "testB : ";

	/*Adresse* AdresseEtudiant = new Adresse(
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

	AffichageTotal();*/

}

void AffichageListEtudiants()
{
	string line;
	ifstream myfile("Data/DataEtudiants.csv");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << endl;
		}
		myfile.close();
	}
	else
	{
		cout << "Erreur lors de l'ouverture du fichier" << endl;
	}
}

void updateCSVEtudiants(string nom, string prenom, int telephone,
	string mail, string datenaissance, string promo,
	string CV, int montantScolariter, string stageEntreprise)
{
	//TODO Adresse
	ofstream myfile;
	myfile.open("Data/DataEtudiants.csv", std::ios_base::app);
	myfile << nom << ',' << prenom << ',' << telephone << ',' << mail << ',' << datenaissance << ',' << promo << ',' << CV << ',' << montantScolariter << ',' << stageEntreprise << "\n";
	myfile.close();
}

void createCSVEtudiants()
{
	ofstream myfile;
	myfile.open("Data/DataEtudiants.csv");
	myfile << "Nom,Prenom,Telephone,Mail,Date de Naissance,Promo,CV,Montant de la Scolariter,Entreprise de Stage";
	myfile << '\n';
	myfile.close();
}

#pragma endregion 

#pragma region Profs
void AjoutProfs()
{
	/*Adresse* AdresseProf = new Adresse(
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

	AffichageTotal();*/

}

void AffichageListProfs()
{
	string line;
	//ui->listWidgetProfs->clear();
	ifstream myfile("DataProfs.csv");
	if (myfile.is_open())
	{
		int i;
		while (getline(myfile, line))
		{
			
			cout << line << '\n';
			//ui->listWidgetProfs->addItem(QString::fromStdString(line) /*+ QString::number(i)*/);


		}
		myfile.close();
	}
}

void updateCSVProfs()
{
	ofstream myfile;
	myfile.open("Data/DataProfs.csv", std::ios_base::app);
	myfile << "\n";
	myfile.close();
}

void createCSVProfs()
{
	ofstream myfile;
	myfile.open("Data/DataProfslephone,Date de Naissance,Numero Compte Bancaire,Email Professionel,Telephone fix Professionel,Telephone mobile Professionel,Horaires,Type de contrat,Type de poste,Salaire,Date virement de salaire,Conges restant");
	myfile << '\n';
	myfile.close();
}

#pragma endregion 

#pragma region Admininstration
void AjoutAdministration()
{
	/*Adresse* AdresseAdmin = new Adresse(
		ui->adminAdresseNum->text().toInt(),
		ui->adminAdresseRue->text().toStdString(),
		ui->adminAdresseCodePostal->text().toStdString(),
		ui->adminAdresseVille->text().toStdString(),
		ui->adminAdressePays->text().toStdString()
	);*/

	/*Administration* AdminActuel = new Administration(
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
	AffichageTotal();*/

	/*updateCSVAdmins(
		AdminActuel->getRole(),
		AdminActuel->getNom(),
		AdminActuel->getPrenom(),*/

		//TODO ICI FAIT LES ADRESSE
		/*
		AdresseActuelle->getNumeroRue(),
		AdresseActuelle->getRue(),
		AdresseActuelle->getCodePostal(),
		AdresseActuelle->getVille(),
		AdresseActuelle->getPays(),*/

	/*	AdminActuel->getEmail(),
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
		AdminActuel->getCongeRestant());*/

}

void updateCSVAdmins(string role, string nom, string prenom, string email,
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

void AffichageListAdmins()
{
	string line;
	//ui->listWidgetAdmins->clear();
	ifstream myfile("DataAdministration.csv");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
			//ui->listWidgetAdmins->addItem(QString::fromStdString(line) /*+ QString::number(i)*/);
		}
		myfile.close();
	}
}

void createCSVAdmins()
{
	ofstream myfile;
	myfile.open("Data/DataAdministration.csv");
	myfile << "Role,Nom,Prenom,Email,Telephone,Date de Naissance,Numero Compte Bancaire,Email Professionel,Telephone fix Professionel,Telephone mobile Professionel,Horaires,Type de contrat,Type de poste,Salaire,Date virement de salaire,Conges restant";
	myfile << '\n';
	myfile.close();
}

#pragma endregion 

void AffichageTotal()
{
	AffichageListAdmins();
	AffichageListEtudiants();
	AffichageListProfs();
}

//TODO DUplicate

string readCSV()
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

void ChoixMenu() {
	cout << "Merci d'entre votre choix : ";
	int choix = 0;
	cin >> choix;
		switch (choix)
		{
		case 1:
			//testing
			AffichageListEtudiants();
			break;
		case 2:
			system("cls");
			AjoutEtudiants();
			break;
		case 3:
	//		AffichageListeAdmin();
			break;
		case 4:
	//		AjouterAdmin();
		case 5:
		//	AffichageListeProf();
			break;
		case 6:
			//AjouterProf();
			break;
		case 0:
			exit(0);
			break;			
		default:
			break;
		}
	
	//	choix = AffichageMenuPrincipal(); 
}


void AffichageMenuPrincipal() {	
	cout << "        ***Menu***        " << endl;
	cout << "1 | Ajouter un membre de l'administration" << endl;
	cout << "2 | Afficher tous les membres de l'administration" << endl;
	cout << "**" << endl;
	cout << "3 | Ajouter un étudiant" << endl;
	cout << "4 | Afficher tous les étudiants" << endl;
	cout << "**" << endl;
	cout << "5 | Ajouter un professeur" << endl;
	cout << "6 | Afficher tous les professeurs" << endl;
	cout << "**" << endl;
	cout << "0 | Quitter L'application" << endl;

	ChoixMenu();
}

int main()
{
	AffichageMenuPrincipal();
	return 0;
}