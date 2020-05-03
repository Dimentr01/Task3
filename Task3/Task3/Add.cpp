#include "Add.h"
#include <iostream>

void Add(int &lifes,int &lifes1, robbers Robber[], int &swealth )
{
	std::cout << "Enter the name\n";
	std::cin >> Robber[lifes + 1].name;
	std::cout << "Enter the life 1 (it means he is alive)\n";
	std::cin >> Robber[lifes + 1].life;
	std::cout << "Enter the number of horses\n";
	std::cin >> Robber[lifes + 1].horses;
	std::cout << "Enter the number of sabers\n";
	std::cin >> Robber[lifes + 1].sabers;
	std::cout << "Enter the number of rubies\n";
	std::cin >> Robber[lifes + 1].rubies;
	std::cout << "Enter the number of necklaces\n";
	std::cin >> Robber[lifes + 1].necklaces;
	std::cout << "Enter the number of wifes\n";
	std::cin >> Robber[lifes + 1].wifes;
	std::cout << "Enter the number of money\n";
	std::cin >> Robber[lifes + 1].money;
	Robber[lifes + 1].wealth = 500 * Robber[lifes + 1].horses + 100 * Robber[lifes + 1].sabers + 50 * Robber[lifes + 1].rubies + 10 * Robber[lifes + 1].necklaces - 200 * Robber[lifes + 1].wifes + Robber[lifes + 1].money;
	swealth += Robber[lifes + 1].wealth;
	lifes =lifes+ 1;
	lifes1 = lifes1 + 1;
	std::cout << "Вы добавили его\n" << std::endl;
}
