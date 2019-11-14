//
//  Type.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Type_hpp
#define Model_Type_hpp 
#include <string>
using std::string;

namespace esc {
    class Attribute;

    /// \brief 
    class Type {
    public:
        virtual string getName() const = 0;
    };

    class BoolType : public Type {
    public:
        string getName() const {
            return "bool";
        }
    };

    class IntType : public Type {
    public:
        string getName() const {
            return "int";
        }
    };

}

#endif /* Model_Type_hpp */
