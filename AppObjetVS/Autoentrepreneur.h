#pragma once
#include <iostream>
#include "Adresse.h"
using namespace std;
class Adresse;
class AutoEntrepreneur : public Prof
{
#pragma region Declarations publiques
public:
	AutoEntrepreneur();
	~AutoEntrepreneur();

	int getSirens();
	void setSirens(int SirensPara);

#pragma endregion

#pragma region Declarations privées
private:
	int _Sirens;
	Adresse* _Adresse;
#pragma endregion
};

