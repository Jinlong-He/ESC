//
//  Term.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_AssignmentTerm_hpp
#define Model_AssignmentTerm_hpp
#include "Term.hpp"
namespace esc {
  /// \brief the AssignmentTerm contains AttributeTerm and MethodTerm.
  class AssignmentTerm : public Term {
  public:
    AssignmentTerm();
    virtual bool isAMethodCall();
    virtual bool isAVariableSetting();
    virtual bool isLeftHand();
  };
}

#endif /* Model_AssignmentTerm_hpp */
