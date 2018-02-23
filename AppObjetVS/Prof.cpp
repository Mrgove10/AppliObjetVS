#include "stdafx.h"
#include "Prof.h"

#pragma region Constructeur / Destructeur
Prof::Prof()
{
}

Prof::Prof(string nom, string prenom, string email, int telephone, string dateNaissance, int numeroCompteBancaire, string casierJudiciaire)
{
	m_nom = nom;
	m_prenom = prenom;
	m_email = email;
	m_telephone = telephone;
	m_dateNaissance = dateNaissance;
	m_numCompteBancaire = numeroCompteBancaire;
	m_casierJudiciare = casierJudiciaire;
}


Prof::~Prof()
{
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
