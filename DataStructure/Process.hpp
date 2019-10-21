#include "iostream"
#include <list>
#include "FiniteStateMachine.hpp"
class Process;
class Model;

class Type {
};

class Attribute {
private:
    Type type;
    std::string initialValue;
    Process* p;
};

class Method {
protected:
    std::list<Attribute*> parameters;
    Attribute* returnParameters;
};

class Signal : public Method {
    bool inout;
};

class Process {
private:
    std::list<Attribute> attributes;
    std::list<Method> methods;
    std::list<Signal> signals;
    FiniteStateMachine* fst;
    Model* model;
};
