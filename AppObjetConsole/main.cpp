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
#include "targetver.h"
#include <string>
using namespace std;


///
#pragma region Etudiants

void updateCSVEtudiants(string nom, string prenom, int telephone,
	string mail, string datenaissance, string promo,
	string CV, float montantScolariter, string stageEntreprise)
{
	//TODO Adresse
	ofstream myfile;
	myfile.open("Data/DataEtudiants.csv", std::ios_base::app);
	myfile << nom << ',' << prenom << ',' << telephone << ',' << mail << ',' << datenaissance << ',' << promo << ',' << CV << ',' << montantScolariter << ',' << stageEntreprise << "\n";
	myfile.close();
}

void AjoutEtudiants()
{
	string nomTEMP;
	string prenomTEMP;
	int telephoneTEMP;
	string emailTEMP;
	string dateNaissanceTEMP;
	string promoTEMP;
	string CVTEMP;
	float montantScolariteTEMP;
	string stageEntrepriseTEMP;

	cin >> nomTEMP;
	cin >> prenomTEMP;
	cin >> telephoneTEMP;
	cin >> emailTEMP;
	cin >> dateNaissanceTEMP;
	cin >> promoTEMP;
	cin >> CVTEMP;
	cin >> montantScolariteTEMP;
	cin >> stageEntrepriseTEMP; 
	// tu devrais mettre un cout devant tes cin pour que ça soit plus clair

	Etudiant* EtudiantActuel = new Etudiant(nomTEMP, prenomTEMP, 
		telephoneTEMP, emailTEMP, dateNaissanceTEMP, 
		promoTEMP, CVTEMP, montantScolariteTEMP, stageEntrepriseTEMP);



	updateCSVEtudiants( //"identifier not found" ??????????????????
		EtudiantActuel->getNom(),  
		EtudiantActuel->getPrenom(),
		EtudiantActuel->getTelephone(),
		EtudiantActuel->getEMail(),
		EtudiantActuel->getDateNaissance(),
		EtudiantActuel->getPromo(),
		EtudiantActuel->getCV(),
		EtudiantActuel->getMontantScolarite(),
		EtudiantActuel->getStageEntreprise()
		//TODO ADresse etudiant
	);

	/*Adresse* AdresseEtudiant = new Adresse(
		ui->adminAdresseNum->text().toInt(),
		ui->adminAdresseRue->text().toStdString(),
		ui->adminAdresseCodePostal->text().toStdString(),
		ui->adminAdresseVille->text().toStdString(),
		ui->adminAdressePays->text().toStdString());


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
	string profNomTEMP;
	string profPrenomTEMP;
	string profEmailTEMP;
	int profTelephoneTEMP;
	string profDateNaissanceTEMP;
	int profNumCompteBancaireTEMP;
	string profCasierJudiciaireTEMP;
	int profAdresseNumTEMP;
	string profAdresseRueTEMP;
	string profAdresseCodePostalTEMP;
	string profAdresseVilleTEMP;
	string profAdressePaysTEMP;

	cout << "Nom du prof : " << endl;
	cin >> profNomTEMP;
	cout << "Prenom du prof : " << endl;
	cin >> profPrenomTEMP;
	cout << "Adresse du prof : " << endl;
	cout << "Numéro de la rue : " << endl;
	cin >> profAdresseNumTEMP;
	cout << "La rue : " << endl;
	cin >> profAdresseRueTEMP;
	cout << "Le code postal : " << endl;
	cin >> profAdresseCodePostalTEMP;
	cout << "La ville : " << endl;
	cin >> profAdresseVilleTEMP;
	cout << "Le pays : " << endl;
	cin >> profAdressePaysTEMP;
	cout << "Email du prof : " << endl;
	cin >> profEmailTEMP;
	cout << "Telephone du prof : " << endl;
	cin >> profTelephoneTEMP;
	cout << "Date de naissance du prof : " << endl;
	cin >> profDateNaissanceTEMP;
	cout << "Numero du compte bancaire du prof" << endl;
	cin >> profNumCompteBancaireTEMP;
	cout << "Casier judiciaire du prof" << endl;
	cin >> profCasierJudiciaireTEMP;

	Adresse* AdresseProf = new Adresse(profAdresseNumTEMP, profAdresseRueTEMP, profAdresseCodePostalTEMP, profAdresseVilleTEMP, profAdressePaysTEMP);

	Prof* ProfActuel = new Prof(profNomTEMP, profPrenomTEMP, profEmailTEMP,
		profTelephoneTEMP, profDateNaissanceTEMP,
		profNumCompteBancaireTEMP, profCasierJudiciaireTEMP);

	//AffichageTotal();*/

}

void AffichageListProfs()
{
	string line;
	//ui->listWidgetProfs->clear();
	ifstream myfile("Data/DataProfs.csv");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
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
	myfile.open("Data/DataProfs");
	//TODO modifier ici
	myfile << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	myfile << '\n';
	myfile.close();
}

#pragma endregion 

#pragma region Admininstration
void AjoutAdministration()
{
	string adminRoleTEMP;
	string adminNomTEMP;
	string adminPrenomTEMP;
	string adminEmailPersoTEMP;
	int adminTelephonePersoTEMP;
	string adminDateNaissanceTEMP;
	int adminNumCompteBancaireTEMP;
	string adminCasierJudiciaireTEMP;
	int adminAdresseNumTEMP;
	string adminAdresseRueTEMP;
	string adminAdresseCodePostalTEMP;
	string adminAdresseVilleTEMP;
	string adminAdressePaysTEMP;
	string adminEmailProTEMP;
	int adminTelFixProTEMP;
	int adminTelMobileProTEMP;
	int adminHorairesTEMP;
	string adminContratTEMP;
	string adminTypePosteTEMP;
	float adminSalaireTEMP;
	string adminDateVirementSalaireTEMP;
	int adminCongeRestantTEMP;

	cout << "Admin role : " << endl;	
	cin >> adminRoleTEMP;
	cout << "Nom de l'admin : " << endl;
	cin >> adminNomTEMP;
	cout << "Prenom de l'admin : " << endl;
	cin >> adminPrenomTEMP;
	cout << "Adresse de l'admin : " << endl;
	cout << "Numéro de la rue : " << endl;
	cin >> adminAdresseNumTEMP;
	cout << "La rue : " << endl;
	cin >> adminAdresseRueTEMP;
	cout << "Le code postal : " << endl;
	cin >> adminAdresseCodePostalTEMP;
	cout << "La ville : " << endl;
	cin >> adminAdresseVilleTEMP;
	cout << "Le pays : " << endl;
	cin >> adminAdressePaysTEMP;
	cout << "Email Perso de l'admin : " << endl;
	cin >> adminEmailPersoTEMP;
	cout << "Telephone Mobile Perso de l'admin : " << endl;
	cin >> adminTelephonePersoTEMP;
	cout << "Date de naissance de l'admin : " << endl;
	cin >> adminDateNaissanceTEMP;
	cout << "Numero du compte bancaire de l'admin" << endl;
	cin >> adminNumCompteBancaireTEMP;
	cout << "Email Pro de l'admin : " << endl;
	cin >> adminEmailProTEMP;
	cout << "Telephone Fix Pro de l'admin : " << endl;
	cin >> adminTelFixProTEMP;
	cout << "Telephone Moile Pro de l'admin : " << endl;
	cin >> adminTelMobileProTEMP;
	cout << "Horaires de l'admin : " << endl;
	cin >> adminHorairesTEMP;
	cout << "Contrat de l'admin : " << endl;
	cin >> adminContratTEMP;
	cout << "Type de poste de l'admin : " << endl;
	cin >> adminTypePosteTEMP;
	cout << "Salaire de l'admin : " << endl;
	cin >> adminSalaireTEMP;
	cout << "Date de virement de salaire de l'admin : " << endl;
	cin >> adminDateVirementSalaireTEMP;
	cout << "Conge restant de l'admin : " << endl;
	cin >> adminCongeRestantTEMP;
	

	Adresse* AdresseAdmin = new Adresse(adminAdresseNumTEMP, adminAdresseRueTEMP, adminAdresseCodePostalTEMP,
		adminAdresseVilleTEMP, adminAdressePaysTEMP);
		
	Administration* AdminActuel = new Administration(adminRoleTEMP, adminNomTEMP, adminPrenomTEMP,
		adminEmailPersoTEMP, adminTelephonePersoTEMP,
		adminDateNaissanceTEMP, adminNumCompteBancaireTEMP, adminEmailProTEMP, adminTelFixProTEMP, 
		adminTelMobileProTEMP, adminHorairesTEMP, adminContratTEMP, adminTypePosteTEMP,
		adminSalaireTEMP, adminDateVirementSalaireTEMP, adminCongeRestantTEMP);


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
	ifstream myfile("Data/DataAdministration.csv");
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

void ChoixMenu() {
	cout << "Merci d'entre votre choix : ";
	int choix = 0;
	cin >> choix;
		switch (choix)
		{
		//admininstration
		case 1:
			AjoutAdministration();
			break;
		case 2:
			//system("cls");
			AffichageListAdmins();
			break;

		//etudiants
		case 3:
			AjoutEtudiants();
			break;
		case 4:
			AffichageListEtudiants();
			break;

		//profs
		case 5:
			AjoutProfs();
			break;
		case 6:
			AffichageListProfs();
			break;

		//over
		case 9:
			exit(0);
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
	cout << "9 | Credits" << endl;
	cout << "0 | Quitter L'application" << endl;

	ChoixMenu();
}

int main()
{
	AffichageMenuPrincipal();
	return 0;
}