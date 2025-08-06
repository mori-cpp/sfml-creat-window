#include <SFML/Graphics.hpp>
int main()
{

    RenderWindow window(VideoMode({ 500, 500 }), "title", Style::Default);
    while (window.isOpen())
    {
        while (const auto event = window.pollEvent())
        {
            if (event->is<Event::Closed>())
            {
                window.close();
            }
        }
    }
}
