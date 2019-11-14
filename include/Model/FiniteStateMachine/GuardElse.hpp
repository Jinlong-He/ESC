//
//  GuardEmpty.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_GuardElse_hpp
#define Model_GuardElse_hpp
#include "Guard.hpp"

namespace esc {
  /// \brief GuardElse is a Guard that is of the form : else
  class GuardElse : public Guard {
  public:
    GuardElse();
    Guard* getRealGuard();
    bool isElseGuard() {return true;}
  }
}

#endif /* Model_GuardElse_hpp */
