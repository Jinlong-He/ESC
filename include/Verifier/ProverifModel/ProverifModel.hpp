//
//  ProverifModel.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_ProverifModel_hpp
#define Verifier_ProverifModel_hpp
#include "ProverifProcess.hpp"
#include "ProverifDeclaration.hpp"
#include <list>
using std::list;

namespace esc {
  /// \brief ProverifModel in the translator
  class ProverifModel {
  private:
      ProverifProcess* mainProcess; //< mainProcess in proverif model
      list<ProverifDeclaration*> declarations; //< the declarations in proverif model
  public:
    ProverifModel();

    void setMainProcess(ProverifProcess* _mainProcess);
    void addDeclaration(ProverifDeclaration* _d);
  };
}

#endif /* Verifier_ProverifModel_hpp */
