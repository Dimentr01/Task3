#include <string>
#include "Robber.h"
#include <iostream>
#include "Equal.h"

void Kill(std::string a,int &lifes1,int &swealth, robbers Robber[])
{
	int d;
	for (int i = 0; i < 40; i++)
		if ((Equal(a, Robber[i].name) == 1) and ((Robber[i].life) == 1))
		{
			swealth -= Robber[i].wealth;
			d = i;
			break;
		}
	Robber[d].life = 0;
	Robber[d].horses = 0;
	Robber[d].sabers = 0;
	Robber[d].rubies = 0;
	Robber[d].necklaces = 0;
	Robber[d].wifes = 0;
	Robber[d].money = 0;
	Robber[d].wealth = 0;
	lifes1 = lifes1 - 1;
	std::cout << "Вы убили его" << std::endl << std::endl;
}
