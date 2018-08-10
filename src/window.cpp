#include "window.hpp"

Window::Window()
{
    setup("Window", sf::Vector2u(640, 480));
}

Window::Window(const std::string& title, const sf::Vector2u& size)
{
    setup(title, size);
}

Window::~Window()
{
    m_window.close();
}

void
Window::setup(const std::string& title, const sf::Vector2u& size)
{
    m_isDone = false;
    m_windowTitle = title;
    m_windowSize = size;
    createWindow();
}

void
Window::createWindow()
{
    m_window.create(sf::VideoMode(m_windowSize.x, m_windowSize.y),
                        m_windowTitle,
                            (sf::Style::Close | sf::Style::Titlebar));
}

void 
Window::destroyWindow() {
    m_window.close();
}

void
Window::update()
{
    sf::Event event;
    while(m_window.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
        {
            m_isDone = true;
        }
    }
}

bool
Window::getIsDone()
{
    return m_isDone;
}

