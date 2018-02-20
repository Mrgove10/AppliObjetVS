#include "stdafx.h"
#include "ModuleCours.h"


ModuleCours::ModuleCours()
{
}


ModuleCours::~ModuleCours()
{
}

string ModuleCours::getIntituler()
{
	return _intitulerModule;
}

void ModuleCours::setIntituler(string intitulerPara)
{
	_intitulerModule = intitulerPara;
}

string ModuleCours::getFacture()
{
	return _Facture;
}

void ModuleCours::setfacture(string FacturePara)
{
	_Facture = FacturePara;
}

string ModuleCours::getReleverModuleComplet()
{
	return _ReleverModuleComplet;
}

void ModuleCours::setReleverModuleComplet(string ReleverModuleCompletPara)
{
	_ReleverModuleComplet = ReleverModuleCompletPara;
}

float ModuleCours::getHeuresTotales()
{
	return _HeuresEnseigner;
}

void ModuleCours::setHeuresTotales(float HeuresTotalesPara)
{
	_HeuresEnseigner = HeuresTotalesPara;
}
