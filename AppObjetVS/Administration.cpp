#include "stdafx.h"
#include "Administration.h"


Administration::Administration()
{
}

Administration::Administration(string nom, string prenom, string email, int telephone, string dateNaissance, int numeroCompteBancaire, string emailPro, int telephoneFix, int telephoneMobile, float horaires, string contrat, string typeDePoste, float salaire, string dateVirementSalaire, int congeRestant)
{
	m_nom = nom;
	m_prenom = prenom;
	m_email = email;
	m_telephone = telephone;
	m_dateNaissance = dateNaissance;
	m_numCompteBancaire = numeroCompteBancaire;
	m_emailPro = emailPro;
	m_telFixPro = telephoneFix;
	m_telMobilePro = telephoneMobile;
	m_horaires = horaires;
	m_contrat = contrat;
	m_typeDePoste = typeDePoste;
	m_salaire = salaire;
	m_dateVirementSalaire = dateVirementSalaire;
	m_congeRestant = congeRestant;
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
