#include <iostream>
#include "Robber.h"
#include "Begining.h"
#include "menu.h"

int lifes = 0;
int lifes1 = 5;
int swealth = 0;

const int Robbers = 40;
robbers Robber[Robbers];

int main() {
	{
		setlocale(LC_ALL, "Russian");

		begining(swealth,lifes, Robber);

		menu(lifes1,lifes,swealth,Robber);
	}
}


