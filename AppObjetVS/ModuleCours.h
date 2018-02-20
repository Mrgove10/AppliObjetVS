#pragma once
#include <iostream>
#include "Prof.h"
#include <vector>
using namespace std;
class ModuleCours
{
#pragma region Declarations publiques
public:
	ModuleCours();
	~ModuleCours();

	string getIntituler();
	void setIntituler(string intitulerPara);

	string getFacture();
	void setfacture(string FacturePara);

	string getReleverModuleComplet();
	void setReleverModuleComplet(string ReleverModuleCompletPara);

	float getHeuresTotales();
	void setHeuresTotales(float HeuresTotalesPara);
#pragma endregion 

#pragma region Declarations publiques
private:
	string _intitulerModule;
	string _Facture;
	string _ReleverModuleComplet;
	float _HeuresEnseigner;
	vector<Prof*> _enseigant;

#pragma endregion 
};