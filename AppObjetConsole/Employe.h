#pragma once
#include <iostream>
#include "Adresse.h"
#include "Prof.h"
using namespace std;
class Adresse;
class Prof;
class Employe : public Prof
{
#pragma region Declarations publiques
public:
	Employe();
	Employe(string societeEmploye, Adresse* adresseSocieteEmploye);
	~Employe();

	string getSocieteEmploye();
	void setSocieteEmploye(string societeEmploye);

	Adresse* getAdresseSocieteEmploye();
	void setAdresseSocieteEmploye(Adresse* adresseSocieteEmploye);

#pragma endregion

#pragma region Declarations priv�es
private:
	string _societeEmploye;
	Adresse* _adresseSocieteEmploye;

#pragma endregion
};