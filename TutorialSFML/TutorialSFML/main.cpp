#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORK!");

	sf::Vertex point;

	point.position = sf::Vector2f(300, 300);
	point.color = sf::Color::Red;

	sf::VertexArray line(sf::Lines, 2);

	line[0].position = sf::Vector2f(200, 150);
	line[0].color = sf::Color::Red;

	//line[1].position = sf::Vector2f(400, 90);
	//line[1].color = sf::Color::Green;

	line[1] = point;

	sf::VertexArray triangle(sf::Triangles, 3);

	triangle[0].position = sf::Vector2f(20, 50);
	triangle[0].color = sf::Color::White;

	triangle[1].position = sf::Vector2f(70, 250);
	triangle[1].color = sf::Color::Red;

	triangle[2].position = sf::Vector2f(10, 250);
	triangle[2].color = sf::Color::Blue;

	sf::VertexArray quad(sf::Quads, 4);

	quad[0].position = sf::Vector2f(40, 50);
	quad[0].color = sf::Color::Yellow;

	quad[1].position = sf::Vector2f(80, 50);
	quad[1].color = sf::Color::Red;

	quad[2].position = sf::Vector2f(90, 200);
	quad[2].color = sf::Color::Green;

	quad[3].position = sf::Vector2f(10, 150);
	quad[3].color = sf::Color::Cyan;

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear();

		window.draw(quad);

		window.display();
	}
}