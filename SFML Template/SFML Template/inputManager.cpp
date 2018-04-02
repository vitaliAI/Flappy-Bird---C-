//
//  inputManager.cpp
//  SFML Template
//
//  Created by Vitali Mueller on 02/04/2018.
//  Copyright © 2018 Vitali Mueller. All rights reserved.
//

#include "inputManager.hpp"

namespace Vitali
{
    bool InputManager::IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window)
    {
        if(sf::Mouse::isButtonPressed(button))
        {
            sf::IntRect tempRect(object.getPosition().x, object.getPosition().y,
                                 object.getGlobalBounds().width, object.getGlobalBounds().height);
            
            if(tempRect.contains(sf::Mouse::getPosition(window)))
            {
                return true;
            }
        }
        return false;
    }
    
    sf::Vector2i InputManager::GetMousePosition(sf::RenderWindow &window)
    {
        return sf::Mouse::getPosition(window);
    }
}
