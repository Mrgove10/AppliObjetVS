#include "stdafx.h"
#include "Autoentrepreneur.h"
using namespace std;

#pragma region Constructeur / Destructeur
AutoEntrepreneur::AutoEntrepreneur()
{
}

AutoEntrepreneur::AutoEntrepreneur(string siren)
{
	_sirens = siren;
}


AutoEntrepreneur::~AutoEntrepreneur()
{
}
#pragma endregion 


#pragma region Get/Set Sirens
string AutoEntrepreneur::getSirens()
{
	return _sirens;
}
void AutoEntrepreneur::setSirens(string sirensPara)
{
	_sirens = sirensPara;
}
#pragma endregion