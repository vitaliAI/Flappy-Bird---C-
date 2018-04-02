//
//  state.hpp
//  SFML Template
//
//  Created by Vitali Mueller on 02/04/2018.
//  Copyright © 2018 Vitali Mueller. All rights reserved.
//

#ifndef state_h
#define state_h


namespace Vitali
{
    
    class State
    {
    public:
        virtual void Init() = 0;
        virtual void HandleInput() = 0;
        virtual void Update(float dt) = 0;
        virtual void Draw(float dt) = 0;
        virtual void Pause() {}
        virtual void Resume() {}
        
        
    };
}


#endif /* state_h */
