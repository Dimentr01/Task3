#include <iostream>
#include "Robber.h"

void look_at_all_wealth(robbers Robber[],int &lifes1, int &swealth, int &lifes)
{
	std::cout << "����� �����=" << lifes1 << std::endl;
	std::cout << "����� ��������� �����=" << swealth << std::endl;
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
	std::cout << "����� �������=" << horses << std::endl;
	std::cout << "����� �������=" << rubies << std::endl;
	std::cout << "����� ��������=" << necklaces << std::endl;
	std::cout << "����� ������=" << sabers << std::endl;
	std::cout << "����� �����=" << money << std::endl;
	std::cout << "����� ��=" << wifes << std::endl << std::endl;
}
