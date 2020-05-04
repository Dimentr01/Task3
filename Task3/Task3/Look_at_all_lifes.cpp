#include <iostream>
#include "Robber.h"

void Look_at_all_lifes(robbers Robber[], int& lifes,int &lifes1,int &swealth)
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
			std::cout << Robber[i].money<<"     Богатство";
			std::cout << Robber[i].wealth << std::endl << std::endl;
	}
	std::cout << "Вы посмотрели всех живых" << std::endl;
	std::cout << "Всего в банде (с умершими) "<< lifes<<std::endl<<"Всего ";
	int horses = 0, sabers = 0, necklaces = 0, rubies = 0, money = 0, wifes = 0;
	for (int i = 0; i < lifes; i++)
	{
		horses = horses + Robber[i].horses;
		sabers = sabers + Robber[i].sabers;
		rubies = rubies + Robber[i].rubies;
		necklaces = necklaces + Robber[i].necklaces;
		money = money + Robber[i].money;
		wifes = wifes + Robber[i].wifes;
	}
	std::cout << "  " << horses;
	std::cout << "  " << rubies;
	std::cout << "  " << necklaces;
	std::cout << "  " << sabers;
	std::cout << "  " << wifes;
	std::cout << "  " << money << "     Богатство "<<swealth<<std::endl ;
	std::cout << "Всего живых  " << lifes1 << std::endl << std::endl;
}
