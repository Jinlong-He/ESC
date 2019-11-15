//
//  ProverifCounterExample.hpp
//
//  Created by Jinlong He on 2019/11/15.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_ProverifCounterExample_hpp
#define Verifier_ProverifCounterExample_hpp
#include "CounterExample.hpp"
#include <list>
#include <string>
using std::string;
using std::list;

namespace esc {
  /// \brief ProverifCounterExample contains the attacker traces which created by the verification result.
  class ProverifCounterExample : public CounterExample {
  private:
    list<string> attackerTraces; //< the attacker traces.
    int step; //< the step of the attacker traces.

  public:
    ProverifCounterExample(){this.type = "Proverif";}
    void createFromFile();
    int getStep();
    list<string> getAttackerTraces();
  };
}

#endif /* Verifier_ProverifCounterExample_hpp */
