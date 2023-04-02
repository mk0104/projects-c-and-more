#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;


int main()
{
    // sf:Texture loadTexturesa
    sf::Texture  CharacterT;
    
    // sf sprite its used for drawing 
    sf::Sprite CharacterS;

    if (!CharacterT.loadFromFile("Idle.gif")) {
        cout << "Sprite fail to load";

    }
    CharacterS.setTexture(CharacterT);
    
   
    
   
    
    
   
  
    // sf:Texture loadTexture
    sf::Texture BackgroundSprite;
    // sf sprite its used for drawing 
    sf::Sprite mainBackground;

    if (!BackgroundSprite.loadFromFile("Background.png")) {
        cout << "Sprite fail to load";
            
    }
    mainBackground.setTexture(BackgroundSprite);
    
    

    // create the window
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "My window");
    
    
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event Game;
        while (window.pollEvent(Game))
        {
            // "close requested" event: we close the window
            if (Game.type == sf::Event::Closed) {
                window.close();
            }
            else if (Game.type == sf::Event::KeyPressed && Game.key.code == sf::Keyboard::Escape) {
                window.close();
            }
              
            
        } 
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            // left key is pressed: move our character
            CharacterS.move(-1.f, 0.f);
        } 
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            // left key is pressed: move our character
            CharacterS.move(1.f, 0.f);

            
        }
       
       
      
       
       

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);
        window.draw(mainBackground);
        window.draw(CharacterS);

        // end the current frame
        window.display();
    }

    return 0;
}