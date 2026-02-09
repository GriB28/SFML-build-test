#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/Graphics.hpp>

using sf::RenderWindow;
using sf::Text;
using std::to_string;

int main() {
    unsigned long long frames = 0;

    RenderWindow window(
        sf::VideoMode({1280, 720}),
        "SFML-built-test"
    );
    window.setFramerateLimit(24);

    Text frames_text();
    frames_text.setCharacterSize(10);
    frames_text.setPosition(620, 355);

    while (window.isOpen()) {
        window.clear();

        frames_text.setString(to_string(frames));
        window.draw(frames_text);

        window.display();
        frames++;
    }
    return 0;
}
