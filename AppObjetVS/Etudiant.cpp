#include "stdafx.h"
#include "Etudiant.h"
using namespace std;

#pragma region Constructeur / Destructeur
Etudiant::Etudiant()
{
}


Etudiant::~Etudiant()
{
}


#pragma endregion 

#pragma region Get/Set Nom
string Etudiant::getNom()
{
	return _Nom;
}

void Etudiant::setNom(int NomPara)
{
	_Nom = NomPara;
}
#pragma endregion

#pragma region Get/Set Prenom
string Etudiant::getPrenom()
{
	return _Prenom;
}

void Etudiant::setPrenom(string PrenomPara)
{
	_Prenom = PrenomPara;
}
#pragma endregion

#pragma region Get/Set Telephone
string Etudiant::getTelephone()
{
	return _Telephone;
}

void Etudiant::setTelephone(string TelephonePara)
{
	_Telephone = TelephonePara;
}
#pragma endregion

#pragma region Get/Set EMail
string Etudiant::getEMail()
{
	return _EMail;
}

void Etudiant::setEMail(string EMailPara)
{
	_EMail = EMailPara;
}
#pragma endregion

#pragma region Get/Set DateNaissance
string Etudiant::getDateNaissance()
{
	return _DateNaissance;
}

void Etudiant::setDateNaissance(string DateNaissancePara)
{
	_DateNaissance = DateNaissance;
}
#pragma endregion

#pragma region Get/Set Promo
string Etudiant::getPromo()
{
	return _Promo;
}

void Etudiant::setPromo(string PromoPara)
{
	_Promo = PromoPara;
}
#pragma endregion
