//
//  InitialKnowledge.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_InitialKnowledge_hpp
#define Model_InitialKnowledge_hpp 
#include "Process.hpp"

namespace esc {
    class InitialKnowledge {
    public:
        InitialKnowledge();
        InitialKnowledge(Process* _process, Attribute* attribute);
    private:
        Process* process;
        Attribute* attribute;
    };
}

#endif /* Model_InitialKnowledge_hpp */
