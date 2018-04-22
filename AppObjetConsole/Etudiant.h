#pragma once
#include <iostream>
#include <vector>
#include "ModuleCours.h"
#include "Adresse.h"
using namespace std;
class Adresse;
class ModuleCours;
class Etudiant
{
#pragma region Declarations publiques
public:
	Etudiant();
	Etudiant(string nom, string prenom, Adresse* adresse, int telephone, string email, string dateNaissance, string promo, string CV, float montantScolarite, string stageEntreprise);
	~Etudiant();

	string getNom();
	void setNom(string nomPara);

	string getPrenom();
	void setPrenom(string prenomPara);

	int getTelephone();
	void setTelephone(int telephonePara);

	string getEMail();
	void setEMail(string emailPara);

	string getDateNaissance();
	void setDateNaissance(string dateNaissancePara);

	string getPromo();
	void setPromo(string promoPara);

	string getCV();
	void setCV(string CVPara);

	float getMontantScolarite();
	void setMontantScolarite(float montantScolaritePara);

	string getStageEntreprise();
	void setStageEntreprise(string stageEntreprisePara);

	void resteAPayer();

	Adresse* getAdresse();
	void setAdresse(Adresse* adressePara);

#pragma endregion

#pragma region Declarations privées
private:
	string _nom;
	string _prenom;
	int _telephone;
	string _email;
	string _dateNaissance;
	string _promo;
	string _CV;
	float _montantScolarite;
	string _stageEntreprise;
	Adresse* _adresse;
	vector<ModuleCours*> _modules;
#pragma endregion
};
	
