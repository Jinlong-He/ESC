//
//  ProverifVar.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Translator_ProverifVar_hpp
#define Translator_ProverifVar_hpp
#include <string>
using std::string;

namespace esc {
  /// \brief define the Proverif Variables in the translator
  class ProverifVar {
  private:
    string name;   //< variable name
    string type;   //< variable type
    bool isPrivate;//< if variable is private

  public:
    ProverifVar(string _name, string _type);
    ProverifVar(string _name, string _type, bool _isPrivate);
    void getName();
  };
}

#endif /* Translator_ProverifVar_hpp */
