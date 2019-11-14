//
//  Term.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_AssignmentTerm_hpp
#define Model_AssignmentTerm_hpp
#include "Action.hpp"
namespace esc {
  /// \brief the AssignmentTerm contains AttributeTerm and MethodTerm.
  class AssignmentAction : public Action {
  public:
    AssignmentAction();
    virtual bool isAMethodCall();
    virtual bool isAVariableSetting();
    virtual bool isLeftHand();
  };
}

#endif /* Model_AssignmentTerm_hpp */
