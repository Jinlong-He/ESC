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
    /// \brief the attribute of process.
    class Attribute {
    public:
        Attribute();

        Attribute(Type* _type, const string& _identifier);

        Type* getType() const;
        void setType(Type* _type);

        const string& getIdentifier() const;
        void setIdentifier(const string& _identifier);

    private:
        Type* type;
        string identifier;
    };
}

#endif /* Model_Attribute_hpp */
