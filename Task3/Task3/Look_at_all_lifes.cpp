#include <iostream>
#include "Robber.h"

void Look_at_all_lifes(robbers Robber[], int& lifes)
{
	for (int i = 0; i < lifes; i++)
	{
		if (Robber[i].life == 1)
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
			std::cout << Robber[i].money << std::endl << std::endl;
		}
	}
	std::cout << "Вы посмотрели всех живых" << std::endl << std::endl;
}
