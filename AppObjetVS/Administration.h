#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Administration
{
public:
	Administration();
	~Administration();

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

};

