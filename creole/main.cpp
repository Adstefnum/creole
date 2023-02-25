#include <iostream>
#include "Creole.h"
#include <SFML/Graphics.hpp>

int main()
{
    Creole cr = Creole();

    sf::RenderWindow window(sf::VideoMode(800, 600), "My Physics Engine");
   /* cr.setWindowSize(600,800);
    cr.setWindowTitle("Creole");
    cr.initialize();*/
    window.clear(sf::Color::Black);
    // Draw your objects using SFML's rendering functions
    window.display();
}


