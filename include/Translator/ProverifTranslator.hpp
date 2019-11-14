//
//  ProverifTranslator.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Translator_ProverifTranslator_hpp
#define Translator_ProverifTranslator_hpp
#include "Translator.hpp"
#include "ProverifModel/ProverifModel.hpp"
#include <string>
using std::string;

namespace esc {
  /// \brief ProverifTranslator
  class ProverifTranslator : public Translator {
  private:
    ProverifModel* proverifModel; //< Proverif Model in Translator
  public:
    ProverifTranslator();
    ProverifModel* generateProverif(); // Model => ProverifModel.
    void makingStartingProcess(); // get the initialKnowledge and make the start process.
    void makeHeader(); // make the header of the proverif model which includes func, reduc func, attacker queries and evnet queries declarations.
    void makeBlocks(); // translate each process into proverif model.
    bool saveinFile(string path); // save the proverif model into the path file.
  };
}

#endif /* Translator_ProverifTranslator_hpp */
