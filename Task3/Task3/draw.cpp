#include "Robber.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "PieChart.hpp"

void draw(robbers Robber[], int& lifes, int& swealth)
{
			float a1, a2, a3, a4, a5, b, h1, h2, h3, h4, h5,q1=0,q2=0,q3=0,q4=0,q5=0,g=0;
			for (int i = 0; i < lifes; i++)
			{
				q1 = Robber[i].horses + q1; g = g + Robber[i].wifes;
				q2 = q2+Robber[i].sabers;
				q3 = q3+ Robber[i].rubies;
				q4 = q4+ Robber[i].necklaces;
				q5 = q5+Robber[i].money;
			}
			a1 = 500 * q1; b = swealth + 200 * g;
			a2 = 100 * q2;
			a3 = 50 * q3;
			a4 = 10 * q4;
			a5 = q5;
			h1 = a1 / b;
			h2 = a2 / b;
			h3 = a3 / b;
			h4 = a4 / b;
			h5 = a5 / b;

			sf::RenderWindow window(sf::VideoMode(480, 424), "Chart");
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
			pieChart.setPosition(50, 200);

			sf::Font font;
			if (!font.loadFromFile("ArialBlack/ArialBlack.ttf"))
			{
				std::cout << "// error..." << std::endl;
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
			text2.setFillColor(sf::Color(100, 100, 100));
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
			convex.setPoint(2, sf::Vector2f(220.f, 150 - h1 * 100));
			convex.setPoint(3, sf::Vector2f(250.f, 150 - h1 * 100));
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
			convex3.setFillColor(sf::Color(100, 100, 100));
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
