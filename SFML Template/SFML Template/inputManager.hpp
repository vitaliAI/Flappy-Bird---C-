//
//  inputManager.hpp
//  SFML Template
//
//  Created by Vitali Mueller on 02/04/2018.
//  Copyright © 2018 Vitali Mueller. All rights reserved.
//

#ifndef inputManager_hpp
#define inputManager_hpp

#include <SFML/Graphics.hpp>

namespace Vitali
{
    class InputManager
    {
    public:
        InputManager(){}
        ~InputManager(){}
        
        bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
        
        sf::Vector2i GetMousePosition(sf::RenderWindow &window);
    };
}

#endif /* inputManager_hpp */
