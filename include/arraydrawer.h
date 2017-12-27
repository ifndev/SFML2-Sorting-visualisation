#ifndef ARRAYDRAWER_H
#define ARRAYDRAWER_H
#include <SFML/Graphics.hpp>
#include "valuesarray.h"
using namespace sf;

class arraydrawer
{
    public:
        arraydrawer(int num, int max, RenderWindow& app);
        void draw(valuesarray& list);
        virtual ~arraydrawer();

    protected:

    private:
        int numberOfLines;
        int maxValue;
        //int width;
        //float factor;
        RenderWindow& app;
};

#endif // ARRAYDRAWER_H
