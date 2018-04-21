#include "stdafx.h"  
#include "Employe.h"
using namespace std;

#pragma region Constructeur / Destructeur
Employe::Employe()
{
}

Employe::Employe(string societeEmploye)
{
	_societeEmploye = societeEmploye;
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
#pragma endregion