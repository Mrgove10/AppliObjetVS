#pragma once
#include <iostream>
#include <vector>
#include "ModuleCours.h"
#include "Adresse.h"
using namespace std;
class Adresse;
class Etudiant
{
#pragma region Declarations publiques
public:
	Etudiant();
	~Etudiant();

	string getNom();
	void setNom(string NomPara);

	string getPrenom();
	void setPrenom(string PrenomPara);

	int getTelephone();
	void setTelephone(int TelephonePara);

	string getEMail();
	void setEMail(string EMailPara);

	string getDateNaissance();
	void setDateNaissance(string DateNaissancePara);

	string getPromo();
	void setPromo(string PromoPara);

#pragma endregion

#pragma region Declarations privées
private:
	string _Nom;
	string _Prenom;
	int _Telephone;
	string _EMail;
	string _DateNaissance;
	string _Promo;
	Adresse* _Adresse;
	vector<ModuleCours*> Modules;
#pragma endregion
};
	
