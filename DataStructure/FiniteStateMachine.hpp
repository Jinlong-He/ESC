#include "iostream"
#include <list>
class Process;
class State {
};

class Action {
};

class Transition {
    State* from;
    State* to;
    std::list<Action*> actions;
};

class FiniteStateMachine {
    std::list<State*> states;
    std::list<Transition*> transitions;
    Process* process;
};
