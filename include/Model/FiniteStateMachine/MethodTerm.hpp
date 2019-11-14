//
//  Term.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_MethodTerm_hpp
#define Model_MethodTerm_hpp
#include "AssignmentTerm.hpp"
#include <list>
#include <string>

using std::list;
using std::string;

class Method {}

namespace esc {
  /// \breif the method term in the action
  /// \breif the metho term can be a method with a series of args.
  class MethodTerm : public AssignmentTerm {
  private:
    list<Term*> args; //< the args in the method term
    Method* method; //< the method in the method term
  public:
    MethodTerm();
    MethodTerm(Method* _method, list<Term*> _args);
    MethodTerm* createFromString(string toParse); // create a method term from string.
    Method* getMethod();
    list<Term*> getArgs();
    bool isAMethodCall() {return true;};
    bool isAVariableSetting() {return false;};
    bool isLeftHand() {return false;} // method term can be only appear in the rightHand of the action.
    string toString();
    bool containMethodCall() {return true;}
  };
}

#endif /* Model_MethodTerm_hpp */
