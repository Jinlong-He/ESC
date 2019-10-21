#include "iostream"
#include <list>
class Process;

class Vertex {
private:
    std::string name;
};

class Action {
};

class GuardAction : public Action {
};

class NormalAction : public Action {
};

class Edge {
private:
    Vertex* from;
    Vertex* to;
    std::list<Action*> actions;
};

class FiniteStateMachine {
private:
    std::list<Vertex*> vertexes;
    std::list<Edge*> edges;
    Process* process;
};
