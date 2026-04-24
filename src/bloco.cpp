#include <../include/bloco.hpp>

blocos::blocos() : sprite(texture) {} ;

void blocos::texturaBloco(std::string textura) {
    if (!texture.loadFromFile(textura)) {
        std::cout<<"Error al abrir textura: textura não encontrada"<<std::endl;
    }

}

void blocos::criarBloco(sf::RenderWindow& window) {

}
