#include "Robber.h"
#include "Begining.h"
#include "menu.h"
#include <iostream>

int lifes = 5;
int lifes1 = 5;
int swealth = 0;

const int Robbers = 40;
robbers Robber[Robbers];

int main(int argc, char* argv[])
{

	std::system("chcp 1251");
	begining(swealth,lifes, Robber);
		menu(lifes1,lifes,swealth,Robber);
	
}

