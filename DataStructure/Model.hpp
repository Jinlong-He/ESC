#include "Process.hpp"
#include "TopoGraph.hpp"
#include "Pragma.hpp"

class Relation {
private:
    Process* p_out;
    Signal* s_out;

    Process* p_in;
    Signal* s_in;
};

class Model {
    std::list<Process*> processes;
    std::list<Property*> properties;
    std::list<InitialKnowledge*> initialKnowledges;
    std::list<Relation*> relations;
    //TopoGraph* topoGraph;
    // todo: AtackModel and SecurityPropertyModel.
};
