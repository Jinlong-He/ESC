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
#include "../Model/Pragma/InitialKonwledge.hpp"
#include <stirng>
using std::string;

namespace esc {
  class ProverifTranslator : public Translator {
  private:
    ProverifModel* proverifModel;
  public:
    ProverifTranslator();
    ProverifModel* generateProverif();
    void makingStartingProcess();
    void makeHeader();
    void makeBlocks();
    bool saveinFile(string path);
  };
}

#endif /* Translator_ProverifTranslator_hpp */
