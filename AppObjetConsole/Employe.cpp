#include "stdafx.h"  
#include "Employe.h"
using namespace std;

#pragma region Constructeur / Destructeur
Employe::Employe()
{
}

Employe::Employe(string societeEmploye, Adresse* adresseSocieteEmploye)
{
	_societeEmploye = societeEmploye;
	_adresseSocieteEmploye = adresseSocieteEmploye;
}


Employe::~Employe()
{
}


#pragma endregion 


#pragma region Get/Set Sirens
string Employe::getSocieteEmploye()
{
	return _societeEmploye;
}
void Employe::setSocieteEmploye(string societeEmployePara)
{
	_societeEmploye = societeEmployePara;
}
Adresse * Employe::getAdresseSocieteEmploye()
{
	return _adresseSocieteEmploye;
}
void Employe::setAdresseSocieteEmploye(Adresse * adresseSocieteEmploye)
{
	_adresseSocieteEmploye = adresseSocieteEmploye;
}
#pragma endregion