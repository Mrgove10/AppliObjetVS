#pragma once
#include <iostream>
#include <vector>
#include "ModuleCours.h"

using namespace std;

class Prof
{
#pragma region Declarations publiques
public:
	Prof();
	~Prof();

	string getNom();
	void setNom(string nomPara);

	string getPrenom();
	void setPrenom(string prenomPara);

	string getEmail();
	void setEmail(string emailPara);

	int getTelephone();
	void setTelephone(int telephonePara);

	int getDateNaissance();
	void setDateNaissance(int dateNaissancePara);

	int getNumCompteBancaire();
	void setNumCompteBancaire(int numCompteBancairePara);

	//module?

	string getCasierJudiciaire();
	void setCasierJudiciare(string casierJudiciairePara);

	

#pragma endregion

#pragma region Declarations privées
private:
	string m_nom;
	string m_prenom;
	string m_email;
	int m_telephone;
	int m_dateNaissance;
	int m_numCompteBancaire;
	//vector<ModuleCours*> Prof
	string m_casierJudiciare;

#pragma endregion
};

