#include <iostream>
#include "Robber.h"

void look_at_all_wealth(robbers Robber[],int &lifes1, int &swealth, int &lifes)
{
	std::cout << "Всего живых=" << lifes1 << std::endl;
	std::cout << "Общее имущество банды=" << swealth << std::endl;
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
	std::cout << "Всего лошадей=" << horses << std::endl;
	std::cout << "Всего рубинов=" << rubies << std::endl;
	std::cout << "Всего ожерелий=" << necklaces << std::endl;
	std::cout << "Всего сабель=" << sabers << std::endl;
	std::cout << "Всего монет=" << money << std::endl;
	std::cout << "Всего жён=" << wifes << std::endl << std::endl;
}
