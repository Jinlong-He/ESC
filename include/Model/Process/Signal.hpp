//
//  Signal.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Signal_hpp
#define Model_Signal_hpp 
#include "Attribute.hpp"

namespace esc {
    /// \brief the signal of process.
    class Signal {
        Signal();
        Signal(const string& _name, bool _inout, Attribute* _parameter);
        ~Signal() {
            delete parameter;
        }

        const string& getName() const;
        void setName(const string& _name) ;

        Type* getInOut() const ;
        void setInOut(bool _inout);

        Attribute* getParamter() const;
        void setParameters(Attribute* _parameter);

    private:
        string name;                //< the signal name.
        bool inout;                 //< the in_out value.
        Attribute* parameter;       //< the parameter to send/receive.
    };
}

#endif /* Model_Signal_hpp */
