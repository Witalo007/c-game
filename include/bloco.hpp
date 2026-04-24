#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>

class blocos {

private:
    sf::Texture texture;
    

    public:
    blocos();

    void texturaBloco(std::string textura);
    sf::Sprite criarBloco();
    void desenhaBloco(sf::RenderWindow& window, sf::Sprite& sprite);


};