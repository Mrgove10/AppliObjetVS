#pragma once
#include <iostream>
#include <vector>
#include "ModuleCours.h"
#include "Adresse.h"
using namespace std;
class ModuleCours;
class Adresse;
class Employe;
class AutoEntrepreneur;

class Prof
{
#pragma region Declarations publiques
public:
	Prof();
	Prof(string situation, Employe* roleEmploye, string nom, string prenom, Adresse* adresseProf, string email, int telephone, string dateNaissance, int numeroCompteBancaire, string casierJudiciaire);
	Prof(string situation, AutoEntrepreneur* roleAutoEntrepeneur, string nom, string prenom, Adresse* adresseProf, string email, int telephone, string dateNaissance, int numeroCompteBancaire, string casierJudiciaire);
	~Prof();

	string getSituation();
	void setSituation(string situation);

	string getNom();
	void setNom(string nomPara);

	string getPrenom();
	void setPrenom(string prenomPara);

	string getEmail();
	void setEmail(string emailPara);

	int getTelephone();
	void setTelephone(int telephonePara);

	string getDateNaissance();
	void setDateNaissance(string dateNaissancePara);

	int getNumCompteBancaire();
	void setNumCompteBancaire(int numCompteBancairePara);

	string getCasierJudiciaire();
	void setCasierJudiciare(string casierJudiciairePara);

	Adresse* getAdresse();
	void setAdresse(Adresse* adressePara);

	AutoEntrepreneur* getAutoEntrepreneur();
	void setAutoEntrepreneur(AutoEntrepreneur* autoEntrepreneurPara);

	Employe* getEmploye();
	void setEmploye(Employe* employePara);

	

#pragma endregion

#pragma region Declarations privées
private:
	string m_situation;
	string m_nom;
	string m_prenom;
	string m_email;
	int m_telephone;
	string m_dateNaissance;
	int m_numCompteBancaire;
	vector<ModuleCours*> _moduleSEnseigner;
	Adresse* _adresse;
	AutoEntrepreneur* _autoEntrepeneur;
	Employe* _employe;
	string m_casierJudiciare;

#pragma endregion
};

