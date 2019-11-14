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
    /// \brief the user defined data type of process.
    class UserType : public Type {
    public:
        UserType();
        UserType(const string& _name, list<Attribute*> _parameters);

        const string& getName() const;
        void setName(const string& _name) ;

        const list<Attribute*>& getTypes() const;
        void setTypes(const list<Attribute*> _types);

    private:
        string name;                //< the name of this type.
        list<Attribute*> types;     //< the attribute list of this type.
    };
}

#endif /* Model_UserType_hpp */
