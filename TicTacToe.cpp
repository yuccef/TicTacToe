#include <iostream>
#include "board.hpp"
#include "figures.hpp"
#include "game.hpp"
#include"sound.hpp"

using namespace std;


int main()
{
    Board B;  //Create the borad 

    B.setColor(sf::Color::Yellow);  //Set Yellow as a color in the board
    
    Game G;   //Create a "Game"

    Sound S;    //Initialize the sound


    //Variable declarations
    int positionX;
    int positionY;
    int position;
    int positionRY;
    int tour =0;
    int rejouer=1;

    while(rejouer==1) 
    {
        G.reset();
        sf::RenderWindow window(sf::VideoMode(W,H), "TicTacToe");
        
        while (window.isOpen() && G.partieFinie()==0)
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed) //if the user close the window
                    window.close();
            }
            //window.clear(sf::Color::Black);
            if(tour%2==0 && sf::Mouse::isButtonPressed(sf::Mouse::Left)) //if the user click on the screen 
            {   
                S.playSoundClick();  //Click sound
                positionX = sf::Mouse::getPosition(window).x;
                positionY = sf::Mouse::getPosition(window).y;
                position = convertMousePosition(positionX,positionY); //Recover the position
                if(position!=-1) 
                {   
                    if(G.isValidePostition(position)==1)
                    {
                        G.actualisationElements(position,1 ); //Cross
                        tour=tour+1;
                    }
                }
            }
            if(tour%2!=0 && sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {   
                S.playSoundClick();
                positionX = sf::Mouse::getPosition(window).x;
                positionY = sf::Mouse::getPosition(window).y;
                position = convertMousePosition(positionX,positionY);
                if(position!=-1) 
                {   
                    if(G.isValidePostition(position)==1)
                    {
                        G.actualisationElements(position,2); //Dot
                        tour=tour+1;
                    }
                }
            }
            
            B.display(window) ;
            G.display(window);

            window.display();
        }
        rejouer=0;
        rejouer = G.rejouer(G.partieFinie());
    }

    return 0;
}