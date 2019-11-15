//
//  ProverifDeclaration.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_ProverifDeclaration_hpp
#define Verifier_ProverifDeclaration_hpp
#include <string>
using std::string;

namespace esc {
  /// \brief Proverif Declaration
  class ProverifDeclaration {
  private:
    string declaration;

  public:
    ProverifDeclaration();
    string getDeclaration();
  };
}

#endif /* Verifier_ProverifDeclaration_hpp */
