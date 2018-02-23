#pragma once
#include <iostream>
#include <vector>
#include "RelevéNotes.h"
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

#pragma region Declarations privées
private:
	string _intitulerModule;
	string _Facture;
	string _ReleverModuleComplet;
	float _HeuresEnseigner;
	vector<RelevéNotes*> _notesClasse;
#pragma endregion 
};