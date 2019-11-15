//
//  BeagleCounterExample.hpp
//
//  Created by Jinlong He on 2019/11/15.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_BeagleCounterExample_hpp
#define Verifier_BeagleCounterExample_hpp
#include "CounterExample.hpp"
#include "../../Model/FiniteStateMachine/Vertex.hpp"
#include "../../Model/FiniteStateMachine/Edge.hpp"
#include <list>
using std::list;

namespace esc {
  /// \brief BeagleCounterExample conatins the false trace which created by verification result.
  class BeagleCounterExample : public CounterExample {
  private:
    list<Vertex*> vertexs; //< the vertexs in the trace.
    list<Edge*> edges; //< the edges in the trace.
    Vertex startVertex; //< Trace start vertex.

  public:
    BeagleCounterExample() {this.type = "Beagle";}
    void createFromFile();
    void setStartVertex(Vertex* _startVertex);
    void addVertex(Vertex* _vertex);
    void addEdge(Edge* _edge);
  };
}

#endif /* Verifier_BeagleCounterExample_hpp */
