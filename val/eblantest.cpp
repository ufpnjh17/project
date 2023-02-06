#include <SFML/Graphics.hpp>

#include <stdlib.h>

int main()
{
    int n = 10;
    std::vector<std::vector<int>> a(n, std::vector<int>(n));

    sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");
    //sf::RectangleShape shape( sf::Vector2f(10, 10));
    //sf::TriangleFan 
	sf::RectangleShape rectangle(sf::Vector2f(30, 30));
	//rectangle.setSize(sf::Vector2f(200, 200));
	rectangle.setOutlineColor(sf::Color::Red);
	rectangle.setOutlineThickness(5);
	rectangle.setPosition(300, 300);
	
    for (int i = 0; i < a.size(); ++i)
    {
        for (int j = 0; j < a[i].size(); ++j)
        {
            a[i][j] = rand() % 5;
        }
    }

    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

         window.clear();

         for (int i = 0; i < a.size(); ++i)
         {
             for (int j = 0; j < a[i].size(); ++j)
             {
                 rectangle.setFillColor(sf::Color::White);

                 if (a[i][j] == 0) rectangle.setFillColor(sf::Color::Blue);
                 if (a[i][j] == 1) rectangle.setFillColor(sf::Color::Blue);
                 if (a[i][j] == 2) rectangle.setFillColor(sf::Color::Blue);
                 if (a[i][j] == 3) rectangle.setFillColor(sf::Color::Blue);
                 if (a[i][j] == 4) rectangle.setFillColor(sf::Color::Blue);
                 rectangle.setPosition(sf::Vector2f(100 + 32 * j, 100 + 32 * i));
                 window.draw(rectangle);
             }
         }

         window.display();
    }
    return 0;

}