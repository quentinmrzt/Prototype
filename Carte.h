#ifndef DEF_CARTE
#define DEF_CARTE

#include <string>

class Carte
{
public:
	Carte();

	int getCarte(int x, int y);
	int getTailleX();
	int getTailleY();

	void setCarte(int x, int y, int n);

	std::string test();

private:
	int const tailleX = 20;
	int const tailleY = 20;
	int carte[20][20];
};

#endif
