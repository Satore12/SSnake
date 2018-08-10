#include "window.hpp"

int
main()
{
    Window window("Snake", sf::Vector2u(640,480));
    sf::RectangleShape rect(sf::Vector2f(100, 100));
    while(!window.getIsDone())
    {
        window.beginDraw();
        window.draw(rect);
        window.endDraw();
        window.update();
    }
}