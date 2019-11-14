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
    /// \brief the data type of process.
    class Type {
    public:
        /// \brief Gets the name of type.
        /// \return string.
        virtual const string& getName() const = 0;
    };

    /// \brief the bool data type of process.
    class BoolType : public Type {
    public:
        const string& getName() const;
    };

    /// \brief the int data type of process.
    class IntType : public Type {
    public:
        const string& getName() const;
    };
}

#endif /* Model_Type_hpp */
