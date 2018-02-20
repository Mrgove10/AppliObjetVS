#pragma once
#include <iostream>
#include "Adresse.h"
using namespace std;

class Employe
{
#pragma region Declarations publiques
public:
	Employe();
	~Employe();

	int getSocieteEmploye();
	void setSocieteEmploye(int SocieteEmploye);

#pragma endregion

#pragma region Declarations priv�es
private:
	int _SocieteEmploye;
	Adresse* _AdresseSocieteEmploye;

#pragma endregion
};