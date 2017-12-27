#include <SFML/Graphics.hpp>
#include "valuesarray.h"
#include "arraydrawer.h"
int main()
{
    // Create the main window
    sf::RenderWindow app(sf::VideoMode(800, 800), "Insertion sorting visualized");

    //Initializing constants
    const int number = 20;
    const int max = 20;

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
