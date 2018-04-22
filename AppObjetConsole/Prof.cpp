#include "stdafx.h" 
#include "Prof.h"

#pragma region Constructeur / Destructeur
Prof::Prof()
{
}

Prof::Prof(string situation, Employe * roleEmploye, string nom, string prenom, Adresse * adresseProf, string email, int telephone, string dateNaissance, int numeroCompteBancaire, string casierJudiciaire)
{
	m_situation = situation;
	_employe = roleEmploye;
	m_nom = nom;
	m_prenom = prenom;
	_adresse = adresseProf;
	m_email = email;
	m_telephone = telephone;
	m_dateNaissance = dateNaissance;
	m_numCompteBancaire = numeroCompteBancaire;
	m_casierJudiciare = casierJudiciaire;
}

Prof::Prof(string situation, AutoEntrepreneur * roleAutoEntrepeneur, string nom, string prenom, Adresse * adresseProf, string email, int telephone, string dateNaissance, int numeroCompteBancaire, string casierJudiciaire)
{
	m_situation = situation;
	_autoEntrepeneur = roleAutoEntrepeneur;
	m_nom = nom;
	m_prenom = prenom;
	_adresse = adresseProf;
	m_email = email;
	m_telephone = telephone;
	m_dateNaissance = dateNaissance;
	m_numCompteBancaire = numeroCompteBancaire;
	m_casierJudiciare = casierJudiciaire;
}



Prof::~Prof()
{
}

string Prof::getSituation()
{
	return m_situation;
}
void Prof::setSituation(string situation)
{
	m_situation = situation;
}
#pragma endregion 

string Prof::getNom()
{
	return m_nom;
}
void Prof::setNom(string nomPara)
{
	m_nom = nomPara;
}

string Prof::getPrenom()
{
	return m_prenom;
}
void Prof::setPrenom(string prenomPara)
{
	m_prenom = prenomPara;
}

string Prof::getEmail()
{
	return m_email;
}
void Prof::setEmail(string emailPara)
{
	m_email = emailPara;
}

int Prof::getTelephone()
{
	return m_telephone;
}
void Prof::setTelephone(int telephonePara)
{
	m_telephone = telephonePara;
}

string Prof::getDateNaissance()
{
	return m_dateNaissance;
}
void Prof::setDateNaissance(string dateNaissancePara)
{
	m_dateNaissance = dateNaissancePara;
}

int Prof::getNumCompteBancaire()
{
	return m_numCompteBancaire;
}
void Prof::setNumCompteBancaire(int numCompteBancairePara)
{
	m_numCompteBancaire = numCompteBancairePara;
}

string Prof::getCasierJudiciaire()
{
	return m_casierJudiciare;
}
void Prof::setCasierJudiciare(string casierJudiciairePara)
{
	m_casierJudiciare = casierJudiciairePara;
}

Adresse * Prof::getAdresse()
{
	return _adresse;
}

void Prof::setAdresse(Adresse * adressePara)
{
	_adresse = adressePara;
}

AutoEntrepreneur * Prof::getAutoEntrepreneur()
{
	return _autoEntrepeneur;
}

void Prof::setAutoEntrepreneur(AutoEntrepreneur * autoEntrepreneurPara)
{
	_autoEntrepeneur = autoEntrepreneurPara;
}

Employe * Prof::getEmploye()
{
	return _employe;
}

void Prof::setEmploye(Employe * employePara)
{
	_employe = employePara;
}
