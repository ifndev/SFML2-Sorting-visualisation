#include "arraydrawer.h"
#include <SFML/Graphics.hpp>

using namespace sf;

arraydrawer::arraydrawer(int num, int max, RenderWindow& app):numberOfLines(num), maxValue(max), app(app)
{
}

void arraydrawer::draw(valuesarray& list)
{
    for(int i = 0; i < numberOfLines; i++)
    {
        int width = app.getSize().x / numberOfLines;
        float factor =  app.getSize().y / maxValue;
        RectangleShape rectangle(Vector2f(width, abs(list.Get(i)*factor)));
        //RectangleShape rectangle(Vector2f(width,10));
        rectangle.setPosition(Vector2f(i*width, app.getSize().y - list.Get(i)*factor));
        //rectangle.setPosition(Vector2f(0,0));
        rectangle.setFillColor(Color(100,215,255));
        app.draw(rectangle);
    }
}

arraydrawer::~arraydrawer()
{
    //dtor
}
