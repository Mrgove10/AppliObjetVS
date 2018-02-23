#include "stdafx.h"
#include "Etudiant.h"
using namespace std;

#pragma region Constructeur / Destructeur
Etudiant::Etudiant()
{
}

Etudiant::Etudiant(string nom, string prenom, int telephone, string email, string dateNaissance, int promo, string CV, float montantScolarité, string stageEntreprise)
{
	_nom = nom;
	_prenom = prenom;
	_telephone = telephone;
	_email = email;
	_dateNaissance = dateNaissance;
	_promo = promo;
	_CV = CV;
	_montantScolarite = montantScolarité;
	_stageEntreprise = stageEntreprise;
}

Etudiant::~Etudiant()
{
}
#pragma endregion 

#pragma region Get/Set Nom
string Etudiant::getNom()
{
	return _nom;
}

void Etudiant::setNom(string nomPara)
{
	_nom = nomPara;
}
#pragma endregion

#pragma region Get/Set Prenom
string Etudiant::getPrenom()
{
	return _prenom;
}

void Etudiant::setPrenom(string prenomPara)
{
	_prenom = prenomPara;
}
#pragma endregion

#pragma region Get/Set Telephone
int Etudiant::getTelephone()
{
	return _telephone;
}

void Etudiant::setTelephone(int telephonePara)
{
	_telephone = telephonePara;
}
#pragma endregion

#pragma region Get/Set EMail
string Etudiant::getEMail()
{
	return _email;
}

void Etudiant::setEMail(string emailPara)
{
	_email = emailPara;
}
#pragma endregion

#pragma region Get/Set DateNaissance
string Etudiant::getDateNaissance()
{
	return _dateNaissance;
}

void Etudiant::setDateNaissance(string dateNaissancePara)
{
	_dateNaissance = dateNaissancePara;
}
#pragma endregion

#pragma region Get/Set Promo
string Etudiant::getPromo()
{
	return _promo;
}

void Etudiant::setPromo(string promoPara)
{
	_promo = promoPara;
}
string Etudiant::getCV()
{
	return _CV;
}
void Etudiant::setCV(string CVPara)
{
	_CV = CVPara;
}
float Etudiant::getMontantScolarite()
{
	return _montantScolarite;
}
void Etudiant::setMontantScolarite(float montantScolaritePara)
{
	_montantScolarite = montantScolaritePara;
}
string Etudiant::getStageEntreprise()
{
	return _stageEntreprise;
}
void Etudiant::setStageEntreprise(string stageEntreprisePara)
{
	_stageEntreprise = stageEntreprisePara;
}
void Etudiant::resteAPayer()
{
}
#pragma endregion
