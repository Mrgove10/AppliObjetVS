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



#pragma region Etudiants

void updateCSVEtudiants(string nom, string prenom, int telephone,
	string mail, string datenaissance, string promo,
	string CV, float montantScolariter, string stageEntreprise)
{
	//TODO Adresse
	ofstream myfileEtudiant;
	myfileEtudiant.open("Data/DataEtudiants.csv", std::ios_base::app);
	myfileEtudiant << nom << ',' << prenom << ',' << telephone << ',' << mail << ',' << datenaissance << ',' << promo << ',' << CV << ',' << montantScolariter << ',' << stageEntreprise << "\n";
	myfileEtudiant.close();
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

	cout << "Nom de l'etudiant : " << endl;
	cin >> nomTEMP;
	cout << "Prenom de l'etudiant" << endl;
	cin >> prenomTEMP;
	cout << "Telephone de l'etudiant" << endl;
	cin >> telephoneTEMP;
	cout << "Email de l'etudiant" << endl;
	cin >> emailTEMP;
	cout << "Date de naissance de l'etudiant" << endl;
	cin >> dateNaissanceTEMP;
	cout << "Promo de l'etudiant" << endl;
	cin >> promoTEMP;
	cout << "CV de l'etudiant" << endl;
	cin >> CVTEMP;
	cout << "Montant de scolarite de l'etudiant" << endl;
	cin >> montantScolariteTEMP;
	cout << "Entreprise du stage de l'etudiant" << endl;
	cin >> stageEntrepriseTEMP; 

	Etudiant* EtudiantActuel = new Etudiant(nomTEMP, prenomTEMP, 
		telephoneTEMP, emailTEMP, dateNaissanceTEMP, 
		promoTEMP, CVTEMP, montantScolariteTEMP, stageEntrepriseTEMP);



	updateCSVEtudiants( 
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
		ui->etudiantAdresseNum->text().toInt(),
		ui->etudiantAdresseRue->text().toStdString(),
		ui->etudiantAdresseCodePostal->text().toStdString(),
		ui->etudiantAdresseVille->text().toStdString(),
		ui->etudiantAdressePays->text().toStdString());


	AffichageTotal();*/

}

void AffichageListEtudiants()
{
	string line;
	ifstream myfileEtudiant("Data/DataEtudiants.csv");
	if (myfileEtudiant.is_open())
	{
		while (getline(myfileEtudiant, line))
		{
			cout << line << endl;
		}
		myfileEtudiant.close();
	}
	else
	{
		cout << "Erreur lors de l'ouverture du fichier" << endl;
	}

}



void createCSVEtudiants()
{
	ofstream myfileEtudiant;
	myfileEtudiant.open("Data/DataEtudiants.csv");
	myfileEtudiant << "Nom,Prenom,Telephone,Mail,Date de Naissance,Promo,CV,Montant de la Scolariter,Entreprise de Stage";
	myfileEtudiant << '\n';
	myfileEtudiant.close();
}

#pragma endregion 

#pragma region Profs
void updateCSVProfs(string situation, string nom, string prenom, string email, int telephone, string dateNaissance, int numeroCompteBancaire, string casierJudiciaire)
{
	ofstream myfileProf;
	myfileProf.open("Data/DataProfs.csv", std::ios_base::app);
	myfileProf << situation << ", " << nom << ", " << prenom << ", " << email << ", " << telephone << ", " << dateNaissance << ", " << numeroCompteBancaire << ", " << casierJudiciaire << "\n";
	myfileProf.close();
}
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
	string profSituationTEMP;
	string profSirenTEMP;
	int profAutoAdresseNumTEMP;
	string profAutoAdresseRueTEMP;
	string profAutoAdresseCodePostalTEMP;
	string profAutoAdresseVilleTEMP;
	string profAutoAdressePaysTEMP;
	string profSocieteTEMP;

	cout << "Situation du prof (Auto entrepreneur/Employe): " << endl;
	cin >> profSituationTEMP;
	if (profSituationTEMP == "Auto entrepreneur")
	{ 
		cout << "Siren : " << endl; 
		cin >> profSirenTEMP;
		cout << "Adresse de travail : " << endl;
		cout << "Numéro de la rue : " << endl;
		cin >> profAutoAdresseNumTEMP;
		cout << "La rue : " << endl;
		cin >> profAutoAdresseRueTEMP;
		cout << "Le code postal : " << endl;
		cin >> profAutoAdresseCodePostalTEMP;
		cout << "La ville : " << endl;
		cin >> profAutoAdresseVilleTEMP;
		cout << "Le pays : " << endl;
		cin >> profAutoAdressePaysTEMP;
	}
	else if (profSituationTEMP == "Employe")
	{
		cout << "Nom de la societe : " << endl;
		cin >> profSocieteTEMP;
		cout << "Adresse de travail : " << endl;
		cout << "Numéro de la rue : " << endl;
		cin >> profAutoAdresseNumTEMP;
		cout << "La rue : " << endl;
		cin >> profAutoAdresseRueTEMP;
		cout << "Le code postal : " << endl;
		cin >> profAutoAdresseCodePostalTEMP;
		cout << "La ville : " << endl;
		cin >> profAutoAdresseVilleTEMP;
		cout << "Le pays : " << endl;
		cin >> profAutoAdressePaysTEMP;
	}
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

	Prof* ProfActuel = new Prof(profSituationTEMP, profNomTEMP, profPrenomTEMP, profEmailTEMP,
		profTelephoneTEMP, profDateNaissanceTEMP,
		profNumCompteBancaireTEMP, profCasierJudiciaireTEMP);

	updateCSVProfs(
		ProfActuel->getSituation(),
		ProfActuel->getNom(),
		ProfActuel->getPrenom(),
		ProfActuel->getEmail(),
		ProfActuel->getTelephone(),
		ProfActuel->getDateNaissance(),
		ProfActuel->getNumCompteBancaire(),
		ProfActuel->getCasierJudiciaire()
		);
	//AffichageTotal();

}

void AffichageListProfs()
{
	string line;
	//ui->listWidgetProfs->clear();
	ifstream myfileProf("Data/DataProfs.csv");
	if (myfileProf.is_open())
	{
		while (getline(myfileProf, line))
		{
			cout << line << '\n';
		}
		myfileProf.close();
	}
}



void createCSVProfs()
{
	ofstream myfileProf;
	myfileProf.open("Data/DataProfs.csv");
	//TODO modifier ici
	myfileProf << "Situation,Nom,Prenom,Email,Telephone,Date de naissance,Numero du compte bancaire,Casier judiciaire";
	myfileProf << '\n';
	myfileProf.close();
}

#pragma endregion 

#pragma region Admininstration
void updateCSVAdmins(string role, string nom, string prenom, string email,
	int tel, string datenais, int numcombtebanc,
	string emailpro, int telfixpro, int telmobilpor,
	float horaires, string contra, string typedepost,
	float salaire, string datevirementsalaire,
	int congesRestant)
{
	ofstream myfileAdmin;
	myfileAdmin.open("Data/DataAdministration.csv", std::ios_base::app);
	myfileAdmin << role << ',' << nom << ',' << prenom << ',' << email << ',' << tel << ',' << datenais << ',' << numcombtebanc << ',' << emailpro << ',' << telfixpro << ',' << telmobilpor << ',' << horaires << ',' << contra << ',' << typedepost << ',' << salaire << ',' << datevirementsalaire << ',' << congesRestant << "\n";
	myfileAdmin.close();
}

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
	float adminHorairesTEMP;
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

	updateCSVAdmins(
		AdminActuel->getRole(),
		AdminActuel->getNom(),
		AdminActuel->getPrenom(),
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
		AdminActuel->getCongeRestant()
	);
}



void AffichageListAdmins()
{
	string line;
	//ui->listWidgetAdmins->clear();
	ifstream myfileAdmin("Data/DataAdministration.csv");
	if (myfileAdmin.is_open())
	{
		while (getline(myfileAdmin, line))
		{
			cout << line << '\n';
		}
		myfileAdmin.close();
	}
}

void createCSVAdmins()
{
	ofstream myfileAdmin;
	myfileAdmin.open("Data/DataAdministration.csv");
	myfileAdmin << "Role,Nom,Prenom,Email,Telephone,Date de Naissance,Numero Compte Bancaire,Email Professionel,Telephone fix Professionel,Telephone mobile Professionel,Horaires,Type de contrat,Type de poste,Salaire,Date virement de salaire,Conges restant";
	myfileAdmin << '\n';
	myfileAdmin.close();
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
			system("cls");
			AjoutAdministration();
			break;
		case 2:
			system("cls");
			AffichageListAdmins();
			break;

		//etudiants
		case 3:
			system("cls");
			AjoutEtudiants();
			break;
		case 4:
			system("cls");
			AffichageListEtudiants();
			break;

		//profs
		case 5:
			system("cls");
			AjoutProfs();
			break;
		case 6:
			system("cls");
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