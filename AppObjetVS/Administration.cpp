#include "stdafx.h"
#include "Administration.h"


Administration::Administration()
{
}


Administration::~Administration()
{
}

string Administration::getNom()
{
	return m_nom;
}

void Administration::setNom(string nomPara)
{
	m_nom = nomPara;
}

string Administration::getPrenom()
{
	return m_prenom;
}

void Administration::setPrenom(string prenomPara)
{
	m_prenom = prenomPara;
}

string Administration::getEmail()
{
	return m_email;
}

void Administration::setEmail(string emailPara)
{
	m_email = emailPara;
}

int Administration::getTelephone()
{
	return m_telephone;
}

void Administration::setTelephone(int telephonePara)
{
	m_telephone = telephonePara;
}

string Administration::getDateNaissance()
{
	return m_dateNaissance;
}

void Administration::setDateNaissance(string dateNaissancePara)
{
	m_dateNaissance = dateNaissancePara;
}

int Administration::getNumCompteBancaire()
{
	return m_numCompteBancaire;
}

void Administration::setNumCompteBancaire(int numCompteBancairePara)
{
	m_numCompteBancaire = numCompteBancairePara;
}

string Administration::getEmailPro()
{
	return m_emailPro;
}

void Administration::setEmailPro(string emailProPara)
{
	m_emailPro = emailProPara;
}

int Administration::getTelFixPro()
{
	return m_telFixPro;
}

void Administration::setTelFixPro(int telFixProPara)
{
	m_telFixPro = telFixProPara;
}

int Administration::getTelMobilePro()
{
	return m_telMobilePro;
}

void Administration::setTelMobilePro(int telMobilePara)
{
	m_telMobilePro = telMobilePara;
}

float Administration::getHoraires()
{
	return m_horaires;
}

void Administration::setHoraires(float horairesPara)
{
	m_horaires = horairesPara;
}

string Administration::getContrat()
{
	return m_contrat;
}

void Administration::setContrat(string contratPara)
{
	m_contrat = contratPara;
}

string Administration::getTypeDePoste()
{
	return m_typeDePoste;
}

void Administration::setTypeDePoste(string typeDePostePara)
{
	m_typeDePoste = typeDePostePara;
}

float Administration::getSalaire()
{
	return m_salaire;
}

void Administration::setSalaire(float salairePara)
{
	m_salaire = salairePara;
}

string Administration::getDateVirementSalaire()
{
	return m_dateVirementSalaire;
}

void Administration::setDateVirementSalaire(string dateVirementSalairePara)
{
	m_dateVirementSalaire = dateVirementSalairePara;
}

int Administration::getCongeRestant()
{
	return m_congeRestant;
}

void Administration::setCongeRestant(int congeRestantPara)
{
	m_congeRestant = congeRestantPara;
}
