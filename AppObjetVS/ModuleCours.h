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
	ModuleCours(string intitule, string facture, int nbJourEnseignement);
	~ModuleCours();

	string getIntituler();
	void setIntituler(string intitulePara);

	string getFacture();
	void setfacture(string facturePara);

	float getHeuresTotales();
	void setHeuresTotales(float heuresTotalesPara);
#pragma endregion 

#pragma region Declarations privées
private:
	string _intituleModule;
	string _facture;
	float _heuresEnseignees;
	vector<RelevéNotes*> _notesClasse;
#pragma endregion 
};