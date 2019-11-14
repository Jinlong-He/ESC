//
//  Term.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_AttributeTerm_hpp
#define Model_AttributeTerm_hpp
#include "Term.hpp"
#include "../../Process/Attribute.hpp"

namespace esc {
  /// \breif the attribute term in the action
  class AttributeTerm : public Term {
  private:
    Attribute* attribute;       //< attribute of the term
  public:
    AttributeTerm();
    AttributeTerm(Attribute* _attribute);
    AttributeTerm(const string& toParse);

    bool isAMethodCall();
    bool isAVariableSetting();
    bool containAMethodCall();
    string to_stirng() const;
  };
}

#endif /* Model_AttributeTerm_hpp */
