 
#include "Relev�Notes.h"


Relev�Notes::Relev�Notes(){}
Relev�Notes::Relev�Notes(string appreciation, float moyenne)
{
	m_appeciation = appreciation;
	m_moyenne = moyenne;
}
Relev�Notes::~Relev�Notes(){}

string Relev�Notes::getAppreciation(){return m_appeciation;}
void Relev�Notes::setAppreciation(string appreciationPARA) { m_appeciation = appreciationPARA; }

float Relev�Notes::getMoyenne(){return m_moyenne;}
void Relev�Notes::setMoyenne(float moyennePARA) { m_moyenne = moyennePARA; }
