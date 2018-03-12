 
#include "Adresse.h"

#pragma region Constructeur / Destructeur

Adresse::Adresse()
{
}

Adresse::Adresse(int numeroRue, string rue, string codePostal, string Ville, string pays)
{
	_NumeroRue = numeroRue;
	_Rue = rue;
	_CodePostal = codePostal;
	_Pays = pays;
}


Adresse::~Adresse()
{
}

#pragma endregion 

#pragma region Get/Set numero rue
int Adresse::getNumeroRue()
{
	return _NumeroRue;
}

void Adresse::setNumeroRue(int NumeroRuePara)
{
	_NumeroRue = NumeroRuePara;
}
#pragma endregion

#pragma region Get/Set rue
string Adresse::getRue()
{
	return _Rue;
}

void Adresse::setRue(string RuePara)
{
	_Rue = RuePara;
}
#pragma endregion

#pragma region Get/Set code postale
string Adresse::getCodePostal()
{
	return _CodePostal;
}

void Adresse::setCodePostal(string CodePostalPara)
{
	_CodePostal = CodePostalPara;
}
#pragma endregion

#pragma region Get/Set ville
string Adresse::getVille()
{
	return _Ville;
}

void Adresse::setVille(string VillePara)
{
	_Ville = VillePara;
}
#pragma endregion

#pragma region Get/Set pays
string Adresse::getPays()
{
	return _Pays;
}

void Adresse::setPays(string PaysPara)
{
	_Pays = PaysPara;
}
#pragma endregion