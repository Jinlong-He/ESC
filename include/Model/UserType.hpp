//
//  UserType.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_UserType_hpp
#define Model_UserType_hpp 
#include <list>
#include "Type.hpp"
#include "Attribute.hpp"

using std::list;

namespace esc {

    class UserType : public Type {
    public:
        UserType() {}

        UserType(const string& str, list<Attribute*> list)
            : name(str),
              types(list) {}

        string getName() const {
            return name;
        }

    private:
        string name;
        list<Attribute*> types;
    };
}

#endif /* Model_UserType_hpp */
