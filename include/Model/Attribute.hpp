//
//  Attribute.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Attribute_hpp
#define Model_Attribute_hpp 
#include "Type.hpp"

namespace esc {
    class Attribute {
    private:
        Type* type;
        string identifier;
    };
}

#endif /* Model_Attribute_hpp */
