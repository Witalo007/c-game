#include <iostream>
#include <SFML/Graphics.hpp>
#include "../include/bloco.hpp"

int main() {

    std::unique_ptr<blocos> chao = std::make_unique<blocos>();

    sf::RenderWindow window(sf::VideoMode({500,500}),"game");

    chao->texturaBloco("../sprite/blocos/chao.png");



    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
        window.clear(sf::Color::Black);

         chao->criarBloco(window);

        window.display();
    }

    return 0;
}