//
//  BeagleTranslator.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_BeagleTranslator_hpp
#define Verifier_BeagleTranslator_hpp
#include "Translator.hpp"
#include "../BeagleModel/BeagleModel.hpp"
#include <string>
using std::string;

namespace esc {
  /// \brief BeagleTranslator
    class BeagleTranslator : public Translator {
    private:
      BeagleModel* beagleModel; //< Beagle Model in Translator
    public:
      BeagleTranslator();
      BeagleModel* generateBeagle(); // Model => BeagleModel
      void makeHeader(); // get the Beagle Model Header
      void makeModules(); // translate each process into Beagle Module.
      void getProperties(); // get the safety properties in the Beagle Model.
      bool saveInFile(string path); // save the Beagle Model into the path file.
    };
}

#endif /* Verifier_BeagleTranslator_hpp */
