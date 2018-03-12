 
#include "RelevéNotes.h"


RelevéNotes::RelevéNotes(){}
RelevéNotes::RelevéNotes(string appreciation, float moyenne)
{
	m_appeciation = appreciation;
	m_moyenne = moyenne;
}
RelevéNotes::~RelevéNotes(){}

string RelevéNotes::getAppreciation(){return m_appeciation;}
void RelevéNotes::setAppreciation(string appreciationPARA) { m_appeciation = appreciationPARA; }

float RelevéNotes::getMoyenne(){return m_moyenne;}
void RelevéNotes::setMoyenne(float moyennePARA) { m_moyenne = moyennePARA; }
