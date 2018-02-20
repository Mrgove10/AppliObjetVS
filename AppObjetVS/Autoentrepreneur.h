#pragma once
#include <iostream>
using namespace std;

class AutoEntrepreneur
{
#pragma region Declarations publiques
public:
	AutoEntrepreneur();
	~AutoEntrepreneur();

	int getSirens();
	void setSirens(int SirensPara);

#pragma endregion

#pragma region Declarations privées
private:
	int _Sirens;
	
#pragma endregion
};

