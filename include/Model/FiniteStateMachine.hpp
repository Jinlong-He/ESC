//
//  FiniteStateMachine.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_FiniteStateMachine_hpp
#define Model_FiniteStateMachine_hpp
#include "iostream"
#include <list>
#include <Process>
#include <Vertex>
#include <Edge>
using std::string;

//class Process;

/*class Vertex {
private:
    string name;
};

class Action {
};

class Guard {
};

class Edge {
private:
    Vertex* from;
    Vertex* to;
    Guard* guard;
    std::list<Action*> actions;
};*/

/// \brief FiniteStateMachine class
namespace esc {
	class FiniteStateMachine {
	private:
    	std::list<Vertex*> vertexes; //< the set of the states of this fsm.
    	std::list<Edge*> edges; //< the set of the transitions of this fsm.
    	Vertex startVertex; //< record the start state of this fsm.
    	Process* process; //< the FiniteStateMachine belongs to the process.
	};
}
#endif /* Model_FiniteStateMachine_hpp */
