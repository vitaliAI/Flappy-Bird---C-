//
//  assetManager.cpp
//  SFML Template
//
//  Created by Vitali Mueller on 02/04/2018.
//  Copyright © 2018 Vitali Mueller. All rights reserved.
//

#include "assetManager.hpp"


namespace Vitali
{
    void AssetManager::LoadTexture(std::string name, std::string fileName)
    {
        sf::Texture tex;
        if(tex.loadFromFile(fileName))
        {
            this->_texture[name] = tex;
        }
    }
    
    sf::Texture &AssetManager::GetTexture(std::string name)
    {
        return this->_texture.at(name);
    }
    
    void AssetManager::LoadFont(std::string name, std::string fileName)
    {
        sf::Font fon;
        if(fon.loadFromFile(fileName))
        {
            this->_fonts[name] = fon;
        }
    }
    
    sf::Font &AssetManager::GeFont(std::string name)
    {
        return this->_fonts.at(name);
    }
    
    
}
