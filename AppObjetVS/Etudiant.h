#pragma once
#include <iostream>
using namespace std;

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

	int getDateNaissance();
	void setDateNaissance(int DateNaissancePara);

	int getPromo();
	void setPromo(int PromoPara);

	string ModulesEnOption();
	void setModulesEnOption(string EMailPara);


#pragma endregion

#pragma region Declarations privées
private:
	string _Nom;
	string _Prenom;
	int _Telephone;
	string _EMail;
	string _DateNaissance;
	string _Promo;
	string _ModulesEnOption;
#pragma endregion
};
	
