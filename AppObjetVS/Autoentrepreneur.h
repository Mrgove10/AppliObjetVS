#pragma once
#include <iostream>
#include "Adresse.h"
#include "Prof.h"
using namespace std;
class Adresse;
class Prof;
class AutoEntrepreneur : public Prof
{
#pragma region Declarations publiques
public:
	AutoEntrepreneur();
	AutoEntrepreneur(string siren);
	~AutoEntrepreneur();

	string getSirens();
	void setSirens(string sirensPara);

#pragma endregion

#pragma region Declarations privées
private:
	string _sirens;
	Adresse* _adresse;
#pragma endregion
};

