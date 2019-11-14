#include "Process.hpp"
#include "FiniteStateMachine.hpp"

class InitialKnowledge {
private:
    Process* p;
    Attribute* a;
};

class Property {
};

class ConfidentialProperty : public Property {
private:
    Process* p;
    Attribute* a;
};

class AuthenticityProperty : public Property {
private:
    struct value {
        Process* p;
        Vertex* v;
        Attribute* a;
    };

    value* v1;
    value* v2;
};
