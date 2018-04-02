//
//  stateMachine.hpp
//  SFML Template
//
//  Created by Vitali Mueller on 02/04/2018.
//  Copyright © 2018 Vitali Mueller. All rights reserved.
//

#ifndef stateMachine_hpp
#define stateMachine_hpp

#include <memory>
#include <stack>

#include "state.hpp"

namespace Vitali {
    
    typedef std::unique_ptr<State> StateRef;
    
    class StateMachine
    {
    public:
        StateMachine(){}
        ~StateMachine(){}
        
        void AddState(StateRef newState, bool isReplacing = true);
        void RemoveState();
        void ProcessStateChanges();
        StateRef &GetActiveState();
    private:
        std::stack<StateRef> _states;
        StateRef _newState;
        
        bool _isRemoving;
        bool _isAdding;
        bool _isReplacing;
        
    };
    
}

#endif /* stateMachine_hpp */
