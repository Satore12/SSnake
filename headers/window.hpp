#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_

#include <string>
#include <SFML/Graphics.hpp>
 
class Window
{
public:
    Window();
    ~Window();
    Window(const std::string&, const sf::Vector2u& size);
    
    void update();
    //void beginDraw();
    //void endDraw();
    //void draw(sf::Drawable&);    
    bool getIsDone();
    
private:
    void createWindow();
    void destroyWindow();
    void setup(const std::string& title, const sf::Vector2u& size);

private:    
    sf::RenderWindow m_window;
    std::string m_windowTitle;
    sf::Vector2u m_windowSize;
    bool m_isDone;
    
    
};

#endif /* end of include guard: _WINDOW_HPP_ */
