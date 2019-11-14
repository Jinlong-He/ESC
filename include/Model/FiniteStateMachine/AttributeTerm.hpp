//
//  Term.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_AttributeTerm_hpp
#define Model_AttributeTerm_hpp
#include "Term.hpp"

class Attribute;

namespace esc {
  /// \breif the attribute term in the action
  class AttributeTerm : public AssignmentTerm {
  private:
    Attribute* attribute; //< attribute of the term
  public:
    bool isAMethodCall();
    bool isAVariableSetting();
    bool containAMethodCall();
  }
}

#endif /* Model_AttributeTerm_hpp */
