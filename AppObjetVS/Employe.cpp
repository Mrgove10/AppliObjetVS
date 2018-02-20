#include "stdafx.h"
#include "Employe.h"
using namespace std;

#pragma region Constructeur / Destructeur
Employe::Employe()
{
}


Employe::~Employe()
{
}


#pragma endregion 


#pragma region Get/Set Sirens
int Employe::getSocieteEmploye()
{
	return _SocieteEmploye;
}
void Employe::setSocieteEmploye(int SocieteEmployePara)
{
	_SocieteEmploye = SocieteEmployePara;
}
#pragma endregion