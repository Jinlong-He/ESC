//
//  GuardIf.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_GuardIf_hpp
#define Model_GuardIf_hpp
#include "Guard.hpp"
#include "Expression.hpp"

namespace esc {
  /// \breif GuardIf contains an expression condition.
  class GuardIf : public Guard {
  private:
    Expression* expression;
  public:
    GuardIf();
    GuardIf(Expression* _expression);

    Expression* getGuardExpression();
    void setGuardExpression(Expression* _expression);
  };
}

#endif /* Model_GuardIf_hpp */
