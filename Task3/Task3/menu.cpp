#include <string>
#include <iostream>
#include "Equal.h"
#include "Kill.h"
#include "Look_at_all.h"
#include "Look_at_all_lifes.h"
#include "Look_at_all_wealth.h"
#include "Find.h"
#include "draw.h"
#include "Richest.h"
#include "Add.h"

void menu(int &lifes1, int &lifes, int &swealth, robbers Robber[])
{
	std::string a, k, r, f, l, e;
	std::string v;
	std::string name;
	std::cout << "Вы в главном меню\n";
	std::cout << "Выберите действие\n";
	std::cout << "If you want to KILL-enter 1\n";
	std::cout << "If you want to ADD-enter 2\n";
	std::cout << "If you want to find RICHEST-enter 3\n";
	std::cout << "If you want to FIND somebody-enter 4\n";
	std::cout << "If you want to LOOK AT ALL ALIVE-enter 5\n";
	std::cout << "If you want to LOOK AT ALL-enter 6\n";
	std::cout << "If you want to look at all WEALTH-enter 7\n";
	std::cout << "If you want to SEE DIAGRAMS-enter 8\n";
	std::cout << "If you want to EXIT-write Exit\n";
	while (1 == 1)
	{
		std::cin >> v;
		if (Equal(v, "1") == 1)
		{
			std::cout << "Enter the name, who kills\n";
			std::cin >> name;
			Kill(name, lifes1, swealth, Robber);
		}
		if (Equal("2", v) == 1)
			Add(lifes, lifes1, Robber, swealth);
		if (Equal(v, "3") == 1)
			Richest(Robber, lifes);
		if (Equal(v, "4") == 1)
			Find(Robber, lifes);
		if (Equal(v, "5") == 1)
			Look_at_all_lifes(Robber, lifes);
		if (Equal(v, "6") == 1)
			look_at_all(Robber, lifes);
		if (Equal(v, "7") == 1)
			look_at_all_wealth(Robber, lifes1, swealth, lifes);
		if (Equal(v, "8") == 1)
			draw(Robber, lifes, swealth);
		if (Equal(v, "Exit") == 1)
			break;
		std::cout << "Выберите действие\n";
	}
}
