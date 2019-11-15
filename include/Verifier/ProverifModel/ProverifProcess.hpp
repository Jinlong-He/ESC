//
//  ProverifProcess.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_ProverifProcess_hpp
#define Verifier_ProverifProcess_hpp
#include <string>
#include <list>
#include "ProverifVar.hpp"
using std::list;
using std::string;

namespace esc {
  /// \brief Proverif Process in translator
  class ProverifProcess {
  private:
    string name; //< Process name
    list<ProverifVar*> args; //< Process variables

  public:
    ProverifProcess(string _name, list<ProverifVar*> args);
    string getName();
  };
}
#endif /* Verifier_ProverifProcess_hpp */
