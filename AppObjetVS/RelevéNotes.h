#pragma once
#include <iostream>
using namespace std;

class Relev�Notes
{
public:
	Relev�Notes();
	~Relev�Notes();

	string getAppreciation();
	void setAppreciation(string appreciationPARA);

	float getMoyenne();
	void setMoyenne(float moyennePARA);

private:
	string m_appeciation;
	float m_moyenne;
};

