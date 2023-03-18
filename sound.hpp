#ifndef SOUND_HPP
#define SOUND_HPP


#include <SFML/Audio.hpp>
#include<iostream>

using namespace std;


class Sound
{
public:
    Sound();
    void playSoundClick();
    //void playSoundLose();
     void playSoundWin();
  
private:
    sf::SoundBuffer m_buffer;
    sf::Sound m_sound;
};


#endif