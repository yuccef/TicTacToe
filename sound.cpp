#include"sound.hpp"
#include <SFML/Audio.hpp>
#include<iostream>

using namespace std;

 Sound::Sound() {
    
     m_buffer.loadFromFile("click-sound.ogg");

        if(!m_buffer.loadFromFile("click.wav"))
            std::cout << "Erreur lors du chargement du fichier audio" << std::endl;

        m_sound.setBuffer(m_buffer);
}

void Sound::playSoundClick()
    {       
         m_buffer.loadFromFile("click-sound.ogg");
         m_sound.setBuffer(m_buffer);
         m_sound.play();
}

void Sound::playSoundWin(){
         m_buffer.loadFromFile("sound-win.ogg");
         m_sound.setBuffer(m_buffer);
         m_sound.play();
}