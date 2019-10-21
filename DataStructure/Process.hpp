#include "iostream"
#include <list>
#include "FiniteStateMachine.hpp"
class Model;

class Type {
};

class UserType : public Type {
};

/// \brief the attribute for Process.
class Attribute {
private:
    Type* type;                 ///< the data type for this attribute.
    std::string initialValue;   ///< the initial value for this attribute.
};

/// \brief the method for Process.
class Method {
protected:
    std::list<Type*> parameters;   ///< the parameters for this methed.
    Type* returnParameters;        ///< the return data type for this methed.
};

/// \brief the signal for Process.
class Signal : public Method {
private:
    bool inout;                     ///< in/out signal.
};

/// \brief the process of protocal.
class Process {
private:
    std::list<Attribute*> attributes;   ///< the attributes for this process.
    std::list<Method*> methods;         ///< the methods for this process.
    std::list<Signal*> signals;         ///< the signals for this process.
    FiniteStateMachine* fst;            ///< the finite state machine for this process.
    Model* model;                       ///< the model contains this process.
};
