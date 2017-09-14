#include <SFML/Graphics.hpp>
#include <iostream>
#include "Carte.h"

int main()
{
	Carte c;
	std::cout << "Map:\n";
	std::cout << c.test();

	sf::RenderWindow window(sf::VideoMode(200, 200), "Prototype");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}