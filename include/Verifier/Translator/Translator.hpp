//
//  Translator.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_Translator_hpp
#define Verifier_Translator_hpp
#include "../../Model/Model.hpp"

namespace esc {
  class Translator {
  private:
    Model* model;
  public:
    Translator();
    Translator(Model* _model);

    Model* getModel();
    void setModel(Model* _model);
  };
}

#endif /* Verifier_Translator_hpp */
