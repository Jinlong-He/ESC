#include "ProcessInstance.hpp"
class Communication {

};

class TopoTransition {
    ProcessInstance* from;
    ProcessInstance* to;
    Communication* communication;
};

class TopoGraph {
    std::list<ProcessInstance*> states;
    std::list<TopoTransition*> transitions;
};
