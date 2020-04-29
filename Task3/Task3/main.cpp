#include "PieChart.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include<string>
#include<cstdlib>

int lifes = 0;
int lifes1 = 5;

int swealth = 0;


struct robbers
{
	char name[40];
	int life;
	int horses;
	int sabers;
	int rubies;
	int necklaces;
	int wifes;
	int money;
	int wealth;
};
const int Robbers = 40;
robbers Robber[Robbers];


void f()
{
	std::cout << "Загрузите 5 персон (только имена, ценности будут автоматически подгружены)\n" << std::endl;
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
		lifes += 1;
	}
	std::cout << "5 персон загружены" << std::endl;
}

void Add()
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
	lifes += 1;
	lifes1 = lifes1 + 1;
	std::cout << "Вы добавили его\n" << std::endl;
}


bool Equal(std::string a, std::string b) {
	if (a.size() == b.size()) {
		for (int i = 0; i < a.size(); i++)
			if (toupper(a[i]) != toupper(b[i]))
				return false;
		return true;
	}
	else return false;
}

void Kill(std::string a)
{
	int d;
	for (int i = 0; i < 40; i++)
		if ((Equal(a, Robber[i].name) == 1) and ((Robber[i].life) == 1))
		{
			swealth -= Robber[i].wealth;
			d = i;
			break;
		}
	Robber[d].life = 0;
	Robber[d].horses = 0;
	Robber[d].sabers = 0;
	Robber[d].rubies = 0;
	Robber[d].necklaces = 0;
	Robber[d].wifes = 0;
	Robber[d].money = 0;
	Robber[d].wealth = 0;
	lifes1 = lifes1 - 1;
	std::cout << "Вы убили его" << std::endl << std::endl;
}

void Richest()
{
	int k = 0;
	int richest = Robber[0].wealth;
	for (int i = 0; i < lifes; i++)
		if ((Robber[i].wealth > richest) and (Robber[i].life == 1))
			k = i;
	for (int i = 0; i < lifes; i++)
		if ((Robber[i].wealth == Robber[k].wealth) and (Robber[i].life == 1))
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
		}
	std::cout << "Богач найден" << std::endl << std::endl;
}

void Find()
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
}

void Look_at_all_lifes()
{
	for (int i = 0; i < lifes; i++)
	{
		if (Robber[i].life == 1)
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
			std::cout << Robber[i].money << std::endl << std::endl;
		}
	}
	std::cout << "Вы посмотрели всех живых" << std::endl << std::endl;
}

void look_at_all_wealth()
{
	std::cout << "Всего живых=" << lifes1 << std::endl;
	std::cout << "Общее имущество банды=" << swealth << std::endl;
	int horses=0, sabers=0, necklaces=0, rubies=0, money=0,wifes=0;
	for (int i=0;i<lifes;i++)
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

void look_at_all()
{
	for (int i = 0; i < lifes; i++)
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
		std::cout << Robber[i].money << std::endl << std::endl;
	}
	std::cout << "Вы посмотрели всех" << std::endl << std::endl;
}

void draw()
{
	std::string a;
	std::cout << "Write the name of robber (P.s. If some robbers have similar names, you see all of them)\n";
	std::cin >> a;
	for (int i = 0; i < lifes; i++)
	{
		if (Robber[i].name == a && Robber[i].life==1)
		{
			float a1, a2, a3, a4, a5, b, h1, h2, h3, h4, h5;
			a1 = 500 * Robber[i].horses; b = Robber[i].wealth+200*Robber[i].wifes;
			a2 = 100 * Robber[i].sabers;
			a3=50 * Robber[i].rubies;
		    a4 = 10 * Robber[i].necklaces;
			a5 = Robber[i].money;
			h1 = a1 / b;
			h2 = a2 / b;
			h3 = a3 / b;
			h4 = a4 / b;
			h5 = a5 / b;
		
			sf::RenderWindow window(sf::VideoMode(480 , 424), "Chart");
			sw::PieChart pieChart;
			pieChart.slices.resize(5);
			pieChart.slices[0].color = sf::Color::Red;
			pieChart.slices[1].color = sf::Color::Green;
			pieChart.slices[2].color = sf::Color::Blue;
			pieChart.slices[3].color = sf::Color(100, 100, 100);
			pieChart.slices[4].color = sf::Color::Yellow;
		
			pieChart.slices[0].size = h1;
			pieChart.slices[1].size = h2;
			pieChart.slices[2].size = h3;
			pieChart.slices[3].size = h4;
			pieChart.slices[4].size = h5;
		
			pieChart.setSize({ 100.f, 100.f });
			pieChart.update();
			pieChart.setOrigin(pieChart.getSize() / 2.f);
			pieChart.setPosition(50,200);

			sf::Font font;
			if (!font.loadFromFile("ArialBlack/ArialBlack.ttf"))
			{
				std::cout<<"// error..."<< std::endl;
			}
			sf::Text text("horses-red", font);
			text.setFont(font);
			text.setCharacterSize(20);
			text.setStyle(sf::Text::Bold);
			text.setFillColor(sf::Color::Red);
			text.setPosition(0, 0);
			sf::Text text0("sabers-green", font);
			text0.setFont(font);
			text0.setCharacterSize(20);
			text0.setStyle(sf::Text::Bold);
			text0.setFillColor(sf::Color::Green);
			text0.setPosition(0, 20);
			sf::Text text1("rubies-blue", font);
			text1.setFont(font);
			text1.setCharacterSize(20);
			text1.setStyle(sf::Text::Bold);
			text1.setFillColor(sf::Color::Blue);
			text1.setPosition(0, 40);
			sf::Text text2("necklaces-green", font);
			text2.setFont(font);
			text2.setCharacterSize(20);
			text2.setStyle(sf::Text::Bold);
			text2.setFillColor(sf::Color(100,100,100));
			text2.setPosition(0, 60);
			sf::Text text3("money-yellow", font);
			text3.setFont(font);
			text3.setCharacterSize(20);
			text3.setStyle(sf::Text::Bold);
			text3.setFillColor(sf::Color::Yellow);
			text3.setPosition(0, 80);

			sf::ConvexShape convex;
			convex.setPointCount(4);
			convex.setPoint(0, sf::Vector2f(250.f, 150.f));
			convex.setPoint(1, sf::Vector2f(220.f, 150.f));
			convex.setPoint(2, sf::Vector2f(220.f, 150-h1*100));
			convex.setPoint(3, sf::Vector2f(250.f, 150-h1*100));
			convex.setFillColor(sf::Color::Red);
			sf::ConvexShape convex1;
			convex1.setPointCount(4);
			convex1.setPoint(0, sf::Vector2f(290.f, 150.f));
			convex1.setPoint(1, sf::Vector2f(260.f, 150.f));
			convex1.setPoint(2, sf::Vector2f(260.f, 150 - h2 * 100));
			convex1.setPoint(3, sf::Vector2f(290.f, 150 - h2 * 100));
			convex1.setFillColor(sf::Color::Green);
			sf::ConvexShape convex2;
			convex2.setPointCount(4);
			convex2.setPoint(0, sf::Vector2f(330.f, 150.f));
			convex2.setPoint(1, sf::Vector2f(300.f, 150.f));
			convex2.setPoint(2, sf::Vector2f(300.f, 150 - h3 * 100));
			convex2.setPoint(3, sf::Vector2f(330.f, 150 - h3 * 100));
			convex2.setFillColor(sf::Color::Blue);
			sf::ConvexShape convex3;
			convex3.setPointCount(4);
			convex3.setPoint(0, sf::Vector2f(370.f, 150.f));
			convex3.setPoint(1, sf::Vector2f(340.f, 150.f));
			convex3.setPoint(2, sf::Vector2f(340.f, 150 - h4 * 100));
			convex3.setPoint(3, sf::Vector2f(370.f, 150 - h4 * 100));
			convex3.setFillColor(sf::Color(100,100,100));
			sf::ConvexShape convex4;
			convex4.setPointCount(4);
			convex4.setPoint(0, sf::Vector2f(410.f, 150.f));
			convex4.setPoint(1, sf::Vector2f(380.f, 150.f));
			convex4.setPoint(2, sf::Vector2f(380.f, 150 - h5 * 100));
			convex4.setPoint(3, sf::Vector2f(410.f, 150 - h5 * 100));
			convex4.setFillColor(sf::Color::Yellow);

			while (window.isOpen())
			{
				sf::Event event;
				while (window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
						window.close();
				}
				window.clear();
				window.draw(text);
				window.draw(text0);
				window.draw(text1);
				window.draw(text2);
				window.draw(text3);
				window.draw(pieChart);
				window.draw(convex);
				window.draw(convex1);
				window.draw(convex2);
				window.draw(convex3);
				window.draw(convex4);
				window.display();

			}
		}
	}
}

void menu()
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
			std::cin >> name;
			Kill(name);
		}
		if (Equal("2", v) == 1)
			Add();
		if (Equal(v, "3") == 1)
			Richest();
		if (Equal(v, "4") == 1)
			Find();
		if (Equal(v, "5") == 1)
			Look_at_all_lifes();
		if (Equal(v, "6") == 1)
			look_at_all();
		if (Equal(v, "7") == 1)
			look_at_all_wealth();
		if (Equal(v, "8") == 1)
			draw();
		if (Equal(v, "Exit") == 1)
			break;
		std::cout << "Выберите действие\n";
	}
}


int main() {
	{
		setlocale(LC_ALL, "Russian");

		f();

		menu();
	}
}


