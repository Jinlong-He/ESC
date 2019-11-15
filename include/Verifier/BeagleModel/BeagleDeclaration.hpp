//
//  BeagleDeclaration.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_BeagleDeclaration_hpp
#define Verifier_BeagleDeclaration_hpp
#include <string>
using std::string;

namespace esc{
  /// \brief Beagle Declaration
  class BeagleDeclaration {
  private:
    string declaration;

  public:
    BeagleDeclaration();
    string getDeclaration();
  };
}

#endif /* Verifier_BeagleDeclaration_hpp */
