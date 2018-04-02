//
//  assetManager.hpp
//  SFML Template
//
//  Created by Vitali Mueller on 02/04/2018.
//  Copyright © 2018 Vitali Mueller. All rights reserved.
//

#ifndef assetManager_hpp
#define assetManager_hpp

#include <stdio.h>
#include <map>

#include <SFML/Graphics.hpp>

namespace Vitali
{
    class AssetManager
    {
    public:
        AssetManager() {}
        ~AssetManager(){}
        
        void LoadTexture(std::string name, std::string fileName);
        sf::Texture &GetTexture(std::string name);
        
        void LoadFont(std::string name, std::string fileName);
        sf::Font &GeFont(std::string name);
        
    private:
        std::map<std::string, sf::Texture> _texture;
        std::map<std::string, sf::Font> _fonts;
    };
}

#endif /* assetManager_hpp */
