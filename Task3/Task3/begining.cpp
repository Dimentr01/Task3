#include "Robber.h"
#include <iostream>

void begining(int &swealth,int &lifes, robbers Robber[])
{
	std::cout << "«агрузите 5 персон (только имена, ценности будут автоматически подгружены)\n" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> Robber[i].name;
		Robber[i].life = 1;
		Robber[i].horses = rand() % 20;
		Robber[i].sabers = rand() % 10;
		Robber[i].rubies = rand() % 50;
		Robber[i].necklaces = rand() % 100;
		Robber[i].wifes = rand() % 5;
		Robber[i].money = rand() % 2000;
		Robber[i].wealth = 500 * Robber[i].horses + 100 * Robber[i].sabers + 50 * Robber[i].rubies + 10 * Robber[i].necklaces - 200 * Robber[i].wifes + Robber[i].money;
		swealth += Robber[i].wealth;
	}
	std::cout << "5 персон загружены" << std::endl;
}
