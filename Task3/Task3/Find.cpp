#include "Robber.h"
#include <string>
#include <iostream>
#include "Equal.h"

void Find(robbers Robber[], int& lifes)
{
	int p = 0;
	std::string a;
	std::cout << "Enter the name\n";
	std::cin >> a;
	for (int i = 0; i < lifes; i++)
		if (Equal(a, Robber[i].name) == 1)
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
			p++;
		}
	if (p > 1)
		std::cout << "Вы нашли их" << std::endl << std::endl;
	else if (p == 1)
		std::cout << "Вы нашли его" << std::endl << std::endl;
	else
		std::cout << "Вы не нашли его" << std::endl << std::endl;
	std::cout << lifes;
}
