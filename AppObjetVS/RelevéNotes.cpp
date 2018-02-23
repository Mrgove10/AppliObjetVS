#include "stdafx.h"
#include "RelevéNotes.h"


RelevéNotes::RelevéNotes(){}
RelevéNotes::~RelevéNotes(){}

string RelevéNotes::getAppreciation(){return m_appeciation;}
void RelevéNotes::setAppreciation(string appreciationPARA) { m_appeciation = appreciationPARA; }

float RelevéNotes::getMoyenne(){return m_moyenne;}
void RelevéNotes::setMoyenne(float moyennePARA) { m_moyenne = moyennePARA; }
