//
//  CounterExample.hpp
//
//  Created by Jinlong He on 2019/11/15.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_CounterExample_hpp
#define Verifier_CounterExample_hpp
#include <string>
using std::string;

namespace esc {
  class CounterExample {
  private:
    string resultFile;

  protected:
    string type;

  public:
    CounterExample();
    string getCounterExampleType();
    string getResultFile();
  };
}

#endif /* Verifier_CounterExample_hpp */
