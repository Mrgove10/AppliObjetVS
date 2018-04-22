#pragma once
#include <iostream>
#include <vector>
#include "ModuleCours.h"
#include "Adresse.h"
using namespace std;
class ModuleCours;
class Adresse;
class Employe;

class Prof
{
#pragma region Declarations publiques
public:
	Prof();
	Prof(string situation, string nom, string prenom, string email, int telephone, string dateNaissance, int numeroCompteBancaire, string casierJudiciaire);
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
	string m_casierJudiciare;

#pragma endregion
};

