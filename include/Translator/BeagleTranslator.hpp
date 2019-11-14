//
//  BeagleTranslator.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Translator_BeagleTranslator_hpp
#define Translator_BeagleTranslator_hpp
#include "Translator.hpp"
#include "BeagleModel/BeagleModel.hpp"
#include <string>
using std::string;

namespace esc {
    class BeagleTranslator : public Translator {
    private:
      BeagleModel* beagleModel;
    public:
      BeagleTranslator();
      BeagleModel* generateBeagle();
      bool saveInFile(string path);
    };
}

#endif /* Translator_BeagleTranslator_hpp */
