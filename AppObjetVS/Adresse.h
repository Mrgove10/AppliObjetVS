#pragma once
#include <iostream>
using namespace std;

class Adresse
{
#pragma region Declarations publiques
public:
	Adresse();
	~Adresse();

	int getNumeroRue();
	void setNumeroRue(int NumeroRuePara);

	string getRue();
	void setRue(string RuePara);

	string getCodePostal();
	void setCodePostal(string CodePostalPara);

	string getVille();
	void setVille(string VillePara);

	string getPays();
	void setPays(string PaysPara);
#pragma endregion

#pragma region Declarations privées
private:
	int _NumeroRue;
	string _Rue;
	string _CodePostal;
	string _Ville;
	string _Pays;
#pragma endregion
};

