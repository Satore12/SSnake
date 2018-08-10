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
    bool getIsDone();
    void beginDraw();
    void endDraw();
    void draw(sf::Drawable&);    
    void setClearColor(sf::Color);
    
private:
    void createWindow();
    void destroyWindow();
    void setup(const std::string& title, const sf::Vector2u& size);
    
private:    
    sf::RenderWindow m_window;
    
    sf::Color m_windowClearColor;
    sf::Vector2u m_windowSize;
    std::string m_windowTitle;
    bool m_isDone;
    
    
};

#endif /* end of include guard: _WINDOW_HPP_ */
