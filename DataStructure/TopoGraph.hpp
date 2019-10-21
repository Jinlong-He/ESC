#include "Process.hpp"

/// \brief the instance of a Process.
class ProcessInstance {
private:
    Process* process;
};

/// \brief the way of comminication between two processInstances.
class Communication {
    //todo
};

/// \brief the vetex of TopoGraph.
class TopoVertex {
private:
    ProcessInstance* processInstance;
};

/// \brief the edge of TopoGraph.
class TopoEdge {
    ProcessInstance* from;
    ProcessInstance* to;
    Communication* communication;
};

/// \brief the graph describes topo structure of pocessInstance.
class TopoGraph {
    std::list<TopoVertex*> vertexes;
    std::list<TopoEdge*> edges;
};
