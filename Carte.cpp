#include "Carte.h"

using namespace std;

Carte::Carte() {
	// on ini la carte à 0
	for(int x=0 ; x<getTailleX(); x++) {
		for (int y = 0; y < getTailleY(); y++) {
			carte[x][y] = 0;
		}
	}
}

int Carte::getCarte(int x, int y)
{
	return carte[x][y];
}

int Carte::getTailleX()
{
	return tailleX;
}

int Carte::getTailleY()
{
	return tailleY;
}

void Carte::setCarte(int x, int y, int n)
{
	carte[x][y] = n;
}

string Carte::test()
{
	string reponse="";

	for (int x=0 ; x<getTailleX() ; x++) {
		for (int y=0; y < getTailleY(); y++) {
			reponse = reponse + to_string(getCarte(x, y));
		}
		reponse = reponse + "\n";
	}

	return reponse;
}