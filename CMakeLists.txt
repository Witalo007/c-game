cmake_minimum_required(VERSION 3.16)
project(c__)

set(CMAKE_CXX_STANDARD 20)

# 🔴 Ajuste esse caminho para a sua pasta SFML
set(SFML_DIR "/caminho/para/SFML-3.1.0/lib/cmake/SFML")

# Encontrar SFML 3.x
find_package(SFML 3 REQUIRED COMPONENTS Graphics Window System)

# Pega todos os .cpp
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_executable(c__ ${SOURCES}
        include/bloco.hpp
        src/bloco.cpp)

target_include_directories(c__ PRIVATE
        src
        include
)

# Link correto (SFML 3 usa namespace)
target_link_libraries(c__ PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
)