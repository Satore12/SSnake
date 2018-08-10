#include "window.hpp"

int
main()
{
    Window window("Snake", sf::Vector2u(640,480));
    while(!window.getIsDone())
    {
        window.update();
    }
}