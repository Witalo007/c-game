#include <../include/bloco.hpp>

blocos::blocos() {};

void blocos::texturaBloco(std::string textura) {
    if (!texture.loadFromFile(textura)) {
        std::cout<<"Error al abrir textura: textura não encontrada"<<std::endl;
    }
}

sf::Sprite blocos::criarBloco() {
    sf::Sprite sprite(texture);

    return sprite;
}
void blocos::desenhaBloco(sf::RenderWindow& window,sf::Sprite& sprite) {

    window.draw(sprite);
}
