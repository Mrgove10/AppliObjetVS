#pragma once
#include <iostream>
using namespace std;

class Employe
{
#pragma region Declarations publiques
public:
	Employe();
	~Employe();

	int getSocieteEmploye();
	void setSocieteEmploye(int SocieteEmploye);

#pragma endregion

#pragma region Declarations priv�es
private:
	int _SocieteEmploye;

#pragma endregion
};