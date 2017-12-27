#include <SFML/Graphics.hpp>
#include "valuesarray.h"
#include "arraydrawer.h"
#include <iostream>
int main()
{

    //Initializing
    int a = 0;
    int number = 0;
    int max = 0;
    do{
    if(a>0)
        std::cout << "\n Please enter a correct value \n \n";
    a++;
    std::cout << "Number of values (columns) (< or = 800 please):";
    std::cin >> number;
    std::cout << "\n Maximum value possible (< or = 800):";
    std::cin >> max;
    }while( number > 800 || max > 800 || number<1 || max<1);

    // Create the main window
    sf::RenderWindow app(sf::VideoMode(800, 800), "Insertion sorting visualized");

    valuesarray values (number, max);
    values.Generate();


    arraydrawer drawer(number, max, app);

	// Start the game loop
    while (app.isOpen())
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app.close();
        }

        //Reroll if R pressed
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::R))
            values.Generate();

        //Sort if SPACE pressed
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
            values.InsertSort();

        // Clear screen
        app.clear();

        // Draw
        drawer.draw(values);

        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}
