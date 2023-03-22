#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cvijet.h"
using namespace std;
using namespace sf;

Cvijet::Cvijet(RenderWindow& window)
{
	glavaCvijeta.setRadius(125);
	glavaCvijeta.setFillColor(Color(18, 209, 58));
	glavaCvijeta.setPosition(275, 50);
	glavaCvijeta.setOutlineThickness(10);
	glavaCvijeta.setOutlineColor(Color(102, 255, 102));
	glavaCvijeta.setPointCount(300);

	tijeloCvijeta.setSize(Vector2f(14, 400));
	tijeloCvijeta.setFillColor(Color(18, 209, 58));
	tijeloCvijeta.setPosition(393, 300);

	list1.setPointCount(4);
	list1.setFillColor(Color(255, 255, 255));
	list1.setPoint(0, Vector2f(400, 500));
	list1.setPoint(1, Vector2f(600, 400));
	list1.setPoint(2, Vector2f(500, 500));
	list1.setPoint(3, Vector2f(600, 500));

	list2.setPointCount(4);
	list2.setFillColor(Color(255, 255, 255));
	list2.setPoint(0, Vector2f(400, 500));
	list2.setPoint(1, Vector2f(200, 400));
	list2.setPoint(2, Vector2f(300, 500));
	list2.setPoint(3, Vector2f(200, 500));

	usta.setSize(Vector2f(80, 20));
	usta.setFillColor(Color(0, 0, 0));
	usta.setPosition(360, 230);

	oko1.setRadius(20);
	oko1.setPosition(320, 120);
	oko1.setFillColor(Color(255, 69, 0));
	oko1.setPointCount(300);

	oko2.setRadius(20);
	oko2.setPosition(440, 120);
	oko2.setFillColor(Color(255, 69, 0));
	oko2.setPointCount(300);
}

void Cvijet::Draw(RenderWindow& window)
{
	window.draw(glavaCvijeta);
	window.draw(tijeloCvijeta);
	window.draw(list1);
	window.draw(list2);
	window.draw(usta);
	window.draw(oko1);
	window.draw(oko2);
}

void Cvijet::Animate(Clock& clock)
{
	cout << clock.getElapsedTime().asSeconds() << endl;

	if (clock.getElapsedTime().asSeconds() >= 1)
	{
		oko1.setRadius(40);
		oko1.setFillColor(Color(0, 0, 0));
		oko2.setRadius(40);
		oko2.setFillColor(Color(0, 0, 0));
		usta.setSize(Vector2f(80, 75));

	}

	if (clock.getElapsedTime().asSeconds() >= 2)
	{
		oko1.setRadius(20);
		oko1.setFillColor(Color(255, 69, 0));
		oko2.setRadius(20);
		oko2.setFillColor(Color(255, 69, 0));
		usta.setSize(Vector2f(80, 20));

		clock.restart();
	}
}
