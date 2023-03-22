#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cvijet.h"
using namespace std;
using namespace sf;

int main()
{
	const int windowWidth = 800;
	const int windowHeight = 600;
	const std::string windowTitle = "Cvijet";
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), windowTitle);
	window.setFramerateLimit(60);

	Cvijet cvijet(window);
	sf::Clock clock;

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		cvijet.Animate(clock);
		cvijet.Draw(window);
		window.display();
	}

	return 0;
}