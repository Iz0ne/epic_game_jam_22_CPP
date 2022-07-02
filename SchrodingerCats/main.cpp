#include <SFML/Graphics.hpp>
#include"character.h"

using namespace std;

int main()
{
    character player1("../Sprites/Pipoya/pipo-nekonin002.png",20,20);
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Cyan);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        //window.draw(shape);
        window.draw(*player1.getSprite());
        window.display();
    }

    return 0;
}
