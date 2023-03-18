#ifndef FORMES_H
#define FORMES_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Board.hpp"

#define RADIUS 60

class Cross
{
    private:
        sf::VertexArray hlines; 
        sf::VertexArray blines;
        sf::Color couleur;
    public:
        Cross();
        void display(sf::RenderWindow& window,int i);
        void draw(int x, int y); 
        void setColor(sf::Color newColor); 
};

class Dot
{
    private:
        sf::CircleShape cercle;
        sf::Color couleur;
    public:
        Dot(int radius);
        void draw(int x, int y);
        void display(sf::RenderWindow& window, int i);
        void setColor(sf::Color newColor); 

};

#endif