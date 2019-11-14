//
//  Property.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Property_hpp
#define Model_Property_hpp 
#include "Process.hpp"

namespace esc {
    class Property {
        Property();
    private:
    };

    class ConfidentialProperty : public Property {
        ConfidentialProperty();
        ConfidentialProperty(Process* _process, Attribute* _attribute);
    private:
        Process* process;
        Attribute* attribute;
    };

    class AuthenticityProperty : public Property {
        AuthenticityProperty();
        AuthenticityProperty(Process* _process1, Vertex* _vertex1, Attribute* _attribute1,
                             Process* _process2, Vertex* _vertex2, Attribute* _attribute2);
    private:
        struct Value {
            Process* process;
            Vertex* vertex;
            Attribute* attribute;
        };
        Value* value1;
        Value* value2;
    };
}

#endif /* Model_Property_hpp */
