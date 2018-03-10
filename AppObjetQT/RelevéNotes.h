#pragma once
#include <iostream>
#include "ModuleCours.h"
#include "Etudiant.h"
using namespace std;
class Etudiant;
class ModuleCours;
class RelevéNotes
{
public:
	RelevéNotes();
	RelevéNotes(string appreciation, float moyenne);
	~RelevéNotes();

	string getAppreciation();
	void setAppreciation(string appreciationPARA);

	float getMoyenne();
	void setMoyenne(float moyennePARA);

private:
	string m_appeciation;
	float m_moyenne;
	Etudiant* m_etudiant;
	ModuleCours* m_moduleCours;
};

