#pragma once
#include <iostream>
using namespace std;

class RelevéNotes
{
public:
	RelevéNotes();
	~RelevéNotes();

	string getAppreciation();
	void setAppreciation(string appreciationPARA);

	float getMoyenne();
	void setMoyenne(float moyennePARA);

private:
	string m_appeciation;
	float m_moyenne;
};

