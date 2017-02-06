#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(852, 480), "SFML works!");
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Blue);
    
    sf::Texture tx;
    if(!tx.loadFromFile("background1.jpeg"))
    	cout<<"Problem";
    	
    sf::Sprite st;
    st.setTexture(tx);
    st.setColor(sf::Color(255,255,255,128));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        window.draw(st);
        //window.draw(shape);
        window.display();
    }

    return 0;
}
