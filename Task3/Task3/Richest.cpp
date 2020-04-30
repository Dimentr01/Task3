#include "Robber.h"
#include <iostream>

void Richest(robbers Robber[], int &lifes)
{
	int k = 0;
	int richest = Robber[0].wealth;
	for (int i = 0; i < lifes; i++)
		if ((Robber[i].wealth > richest) and (Robber[i].life == 1))
			k = i;
	for (int i = 0; i < lifes; i++)
		if ((Robber[i].wealth == Robber[k].wealth) and (Robber[i].life == 1))
		{
			std::cout << Robber[i].name << std::endl;
			std::cout << "lifes=";
			std::cout << Robber[i].life << std::endl;
			std::cout << "horses=";
			std::cout << Robber[i].horses << std::endl;
			std::cout << "sabers=";
			std::cout << Robber[i].sabers << std::endl;
			std::cout << "rubies=";
			std::cout << Robber[i].rubies << std::endl;
			std::cout << "necklaces=";
			std::cout << Robber[i].necklaces << std::endl;
			std::cout << "wifes=";
			std::cout << Robber[i].wifes << std::endl;
			std::cout << "money=";
			std::cout << Robber[i].money << std::endl;
			std::cout << "wealth=";
			std::cout << Robber[i].wealth << std::endl << std::endl;
		}
	std::cout << "Богач найден" << std::endl << std::endl;
}
