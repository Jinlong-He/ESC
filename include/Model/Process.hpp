//
//  Process.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Process_hpp
#define Model_Process_hpp 
#include "Method.hpp"
#include "Signal.hpp"
#include "FiniteStateMachine.hpp"

namespace esc {
    class Model;

    /// \brief the process of model.
    class Process {
    public:
        Process();
        Process(Model* _model);
        ~Process() {
            //delete attributes, methods, signals and fst.
        }

        Model* getModel() const;
        void setModel(Model* _model);

        Attribute* mkAttribute(Type* type, const string& name);
        Method* mkMethod(const string& _name, Type* _returnType, list<Attribute*> _parameters);
        Signal* mkSignal(const string& _name, bool _inout, Attribute* _parameter);
        FiniteStateMachine* mkFst();
    private:
        list<Attribute*> attributes;        ///< the attributes for this process.
        list<Method*> methods;              ///< the methods for this process.
        list<Signal*> signals;              ///< the signals for this process.
        FiniteStateMachine* fst;            ///< the finite state machine for this process.
        Model* model;                       ///< the model this process from.
    };
}

#endif /* Model_Process_hpp */
