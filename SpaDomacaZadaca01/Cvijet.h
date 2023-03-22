#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

class Cvijet
{
public:
	Cvijet(RenderWindow& window);
	void Draw(RenderWindow& window);
	void Animate(Clock& clock);
private:
	CircleShape glavaCvijeta, oko1, oko2;
	RectangleShape tijeloCvijeta, usta;
	ConvexShape list1, list2;
};