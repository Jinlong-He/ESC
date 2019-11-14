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
  private:
		AttributeTerm* lhs;     //< leftHand of the assignment
		Term* rhs;              //< rightHand can be an attribute or a method call.
  public:
    AssignmentAction();
    AssignmentAction(const string& toParse);

    string to_stirng() const;
  };
}

#endif /* Model_AssignmentTerm_hpp */
