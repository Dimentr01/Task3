#include "Robber.h"
#include <iostream>

void look_at_all(robbers Robber[], int& lifes,int &lifes1, int &swealth)
{
	for (int i = 0; i < lifes; i++)
	{
			std::cout << Robber[i].name << std::endl;
			std::cout << Robber[i].life;
			std::cout << "  ";
			std::cout << Robber[i].horses;
			std::cout << "  ";
			std::cout << Robber[i].sabers;
			std::cout << "  ";
			std::cout << Robber[i].rubies;
			std::cout << "  ";
			std::cout << Robber[i].necklaces;
			std::cout << " ";
			std::cout << Robber[i].wifes;
			std::cout << " ";
			std::cout << Robber[i].money << "     Богатство";
			std::cout << Robber[i].wealth << std::endl << std::endl;
	}
	std::cout << "Вы посмотрели всех" << std::endl;
	std::cout << "Всего\n";
	int horses = 0, sabers = 0, necklaces = 0, rubies = 0, money = 0, wifes = 0;
	for (int i = 0; i < lifes; i++)
	{
		if (Robber[i].life == 1)
		{
			horses = horses + Robber[i].horses;
			sabers = sabers + Robber[i].sabers;
			rubies = rubies + Robber[i].rubies;
			necklaces = necklaces + Robber[i].necklaces;
			money = money + Robber[i].money;
			wifes = wifes + Robber[i].wifes;
		}
	}
	std::cout << "  " << horses;
	std::cout << "  " << rubies;
	std::cout << "  " << necklaces;
	std::cout << "  " << sabers;
	std::cout << "  " << wifes;
	std::cout << "  " << money << "     Богатство " << swealth;
	std::cout << "Всего живых  " << lifes1 << std::endl << std::endl;
	std::cout << "Вы посмотрели всех" << std::endl << std::endl;
}
