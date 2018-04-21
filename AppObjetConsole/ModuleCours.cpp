#include "stdafx.h" 
#include "ModuleCours.h"


ModuleCours::ModuleCours()
{
}

ModuleCours::ModuleCours(string intitule, string facture, int nbJourEnseignement)
{
	_intituleModule = intitule;
	_facture = facture;
	_heuresEnseignees = nbJourEnseignement;
	
}


ModuleCours::~ModuleCours()
{
}

string ModuleCours::getIntituler()
{
	return _intituleModule;
}

void ModuleCours::setIntituler(string intitulePara)
{
	_intituleModule = intitulePara;
}

string ModuleCours::getFacture()
{
	return _facture;
}

void ModuleCours::setfacture(string facturePara)
{
	_facture = facturePara;
}

float ModuleCours::getHeuresTotales()
{
	return _heuresEnseignees;
}

void ModuleCours::setHeuresTotales(float heuresTotalesPara)
{
	_heuresEnseignees = heuresTotalesPara;
}
