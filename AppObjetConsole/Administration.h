#pragma once
#include <iostream>
#include <vector>
#include "Adresse.h"

using namespace std;

class Administration
{
public:
	Administration();
	Administration(string role, string nom, string prenom, string email, int telephone, string dateNaissance, int numeroCompteBancaire, string emailPro, int telephoneFix, int telephoneMobile, float horaires, string contrat, string typeDePoste, float salaire, string dateVirementSalaire, int congeRestant);
	~Administration();

	string getRole();
	void setRole(string rolePara);

	string getNom();
	void setNom(string nomPara);

	string getPrenom();
	void setPrenom(string prenomPara);

	string getEmail();
	void setEmail(string emailPara);

	int getTelephone();
	void setTelephone(int telephonePara);

	string getDateNaissance();
	void setDateNaissance(string dateNaissancePara);

	int getNumCompteBancaire();
	void setNumCompteBancaire(int numCompteBancairePara);

	string getEmailPro();
	void setEmailPro(string emailProPara);

	int getTelFixPro();
	void setTelFixPro(int telFixProPara);

	int getTelMobilePro();
	void setTelMobilePro(int telMobilePara);

	float getHoraires();
	void setHoraires(float horairesPara);

	string getContrat();
	void setContrat(string contratPara);

	string getTypeDePoste();
	void setTypeDePoste(string typeDePostePara);

	float getSalaire();
	void setSalaire(float salairePara);

	string getDateVirementSalaire();
	void setDateVirementSalaire(string dateVirementSalairePara);

	int getCongeRestant();
	void setCongeRestant(int congeRestantPara);

private:
	string m_role;
	string m_nom;
	string m_prenom;
	string m_email;
	int m_telephone;
	string m_dateNaissance;
	int m_numCompteBancaire;
	string m_emailPro;
	int m_telFixPro;
	int m_telMobilePro;
	int m_horaires;
	string m_contrat;
	string m_typeDePoste;
	float m_salaire;
	string m_dateVirementSalaire;
	int m_congeRestant;

	Adresse* m_assistantDirection;
	Adresse* m_responsableEnseignement;
	Adresse* m_responsableEntreprise;
	Adresse* m_directeur;

};

