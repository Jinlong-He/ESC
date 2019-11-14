//
//  ProverifDeclaration.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Translator_ProverifDeclaration_hpp
#define Translator_ProverifDeclaration_hpp
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

#endif /* Translator_ProverifDeclaration_hpp */
