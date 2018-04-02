//
//  game.hpp
//  SFML Template
//
//  Created by Vitali Mueller on 02/04/2018.
//  Copyright © 2018 Vitali Mueller. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "stateMachine.hpp"
#include "assetManager.hpp"
#include "inputManager.hpp"


namespace Vitali
{
    
    struct GameData
    {
        StateMachine machine;
        sf::RenderWindow window;
        AssetManager assets;
        InputManager input;
    };
    
    typedef std::shared_ptr<GameData> GameDataRef;
    class Game
    {
    public:
        Game(int width, int height, std::string title);
    private:
        const float dt = 1.0f / 60.0f;
        sf::Clock _clock;
        
        GameDataRef _data = std::make_shared<GameData>();
        void Run();
        
    };
    
}


#endif /* game_hpp */
