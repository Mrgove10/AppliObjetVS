#include "stdafx.h"  
#include "Autoentrepreneur.h"
using namespace std;

#pragma region Constructeur / Destructeur
AutoEntrepreneur::AutoEntrepreneur()
{
}

AutoEntrepreneur::AutoEntrepreneur(string siren, Adresse* autoAdresse)
{
	_sirens = siren;
	_adresse = autoAdresse;
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
Adresse * AutoEntrepreneur::getAutoAdresse()
{
	return _adresse;
}
void AutoEntrepreneur::setAutoAdresse(Adresse * autoAdresse)
{
	_adresse = autoAdresse;
}
#pragma endregion