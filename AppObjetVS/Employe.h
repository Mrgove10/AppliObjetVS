#pragma once
#include <iostream>
#include "Adresse.h"
#include "Prof.h"
using namespace std;

class Employe : public Prof
{
#pragma region Declarations publiques
public:
	Employe();
	Employe(string societeEmploye);
	~Employe();

	string getSocieteEmploye();
	void setSocieteEmploye(string societeEmploye);

#pragma endregion

#pragma region Declarations privées
private:
	string _societeEmploye;
	Adresse* _adresseSocieteEmploye;

#pragma endregion
};