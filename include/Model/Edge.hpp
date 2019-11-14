//
//  Edge.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Edge_hpp
#define Model_Edge_hpp
#include <list>
#include "Vertex.hpp"
#include "Guard.hpp"
#include "Action.hpp"
using std::list;

namespace esc {
	/// \brief transition in the FSM
	class Edge {
	private:
    	Vertex* from; //< from Vertex
    	Vertex* to; //< to Vertex
    	Guard* guard; //< transtion guard
    	list<Action*> actions; //< actions on the transition

    public:
    	/// \brief Edge constructor 
    	Edge(Vertex* _from, Vertex* _to, Guard* _guard, list<Action*> _actions);

    	Guard* getGuard()
    	{
    		return guard;
    	}

    	Vertex* getFromVertex();

    	void SetFromVertex(Vertex* _from);

    	Vertex* getToVertex();

    	void SetToVertex(Vertex* _to);

    	void setGuard(Guard* _guard)
    	{
    		this.guard = _guard;
    	}

    	void setGuard(string _guard);

    	list<Action*> getActions();

    	Action getActionByIndex(int index);

    	void addAction(string _action);

    	void addAction(Action* _action);

    	bool hasNonDeterministicGuard();

    	bool isEmpty();

    	bool hasActions();

    	void removeAllActions();

    	void removeFirstAction();
	};
}


#endif /* Model_Edge_hpp */
