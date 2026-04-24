#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>

class blocos {
private:
    sf::Texture texture;
    sf::Sprite sprite;


    public:
    blocos();
        void texturaBloco(std::string textura);
    void criarBloco(sf::RenderWindow& window);

};