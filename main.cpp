// include sfml graphics
#include <SFML/Ggiyraphics.hpp>

// define namespace for current app
using namespace sf;

// initial bootstrap for game
int main()
{
    // create video mode object
    VideoMode vm(960, 540);
    // create and open game window
    // RenderWindow window(vm, "Basictemplate", Style::Fullscreen);
    RenderWindow window(vm, "Basictemplate");
    return 0;
}