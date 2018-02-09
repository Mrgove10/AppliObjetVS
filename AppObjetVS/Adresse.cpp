#include "stdafx.h"
#include "Adresse.h"


Adresse::Adresse()
{
}


Adresse::~Adresse()
{
}

int Adresse::getNumeroRue()
{
	return _NumeroRue;
}

void Adresse::setNumeroRue(int NumeroRuePara)
{
	_NumeroRue = NumeroRuePara;
}

string Adresse::getRue()
{
	return _Rue;
}

void Adresse::setRue(string RuePara)
{
	_Rue = RuePara;
}

string Adresse::getCodePostal()
{
	return _CodePostal;
}

void Adresse::setCodePostal(string CodePostalPara)
{
	_CodePostal = CodePostalPara;
}

#pragma region Fonctions ville
string Adresse::getVille()
{
	return _Ville;
}

void Adresse::setVille(string VillePara)
{
	_Ville = VillePara;
}
#pragma endregion

#pragma region Fonctions pays
string Adresse::getPays()
{
	return _Pays;
}

void Adresse::setPays(string PaysPara)
{
	_Pays = PaysPara;
}
#pragma endregion

