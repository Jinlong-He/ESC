//
//  GuardEmpty.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_GuardEmpty_hpp
#define Model_GuardEmpty_hpp
#include "Guard.hpp"

namespace esc {
  /// \breif GuardEmpty inherits the Guard for the empty guard.
  class GuardEmpty : public Guard {
  public:
    GuardEmpty();
    bool isGuarded(){return false;}
  };
}


#endif /* Model_GuardEmpty_hpp */
