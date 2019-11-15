//
//  Verifier.hpp
//
//  Created by Jinlong He on 2019/11/15.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_Verifier_hpp
#define Verifier_Verifier_hpp
#include "Translator/Translator.hpp"
#include "CounterExample/CounterExample.hpp"

namespace esc {
  /// \breif the Verifier in the tool
  class Verifier {
  private:
    Translator* translator; //< translator in the Verifier
    CounterExample* beagleCE; //< the Beagle CE
    CounterExample* proverifCE; //< the Proverif CE
    bool verifyBeagleResult; //< the Beagle verification result
    bool verifyProverifResult; //< the Proverif verification result

  public:
    Verifier();
    Verifier(Translator* _translator);
    void setTranslator(Translator* _translator);
    bool verifyBeagleModel();
    bool verifyProverifModel();
    bool getVerifyBeagleResult();
    bool getVerifyProverifResult();
    CounterExample* getCounterExample(string verifyToolName);
  };
}

#endif /* Verifier_Verifier_hpp */
