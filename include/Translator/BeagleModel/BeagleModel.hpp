//
//  BeagleModel.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Translator_BeagleModel_hpp
#define Translator_BeagleModel_hpp
#include "BeagleModule.hpp"
#include "BeagleProperty.hpp"
#include "BeagleDeclaration.hpp"
#include <list>
using std::list;

namespace esc {
  /// brief BeagleModel in the translator
  class BeagleModel {
  private:
    list<BeagleModule*> modules; //< modules in the Beagle model
    list<BeagleProperty*> properties; //< properties to be verified in the Beagle.
    list<BeagleDeclaration*> declarations; //< declarations in the Beagle model.
  public:
    BeagleModel();

    void addModule(BeagleModule* _module);
    void addProperties(BeagleProperties _property);
    void addDeclaration(BeagleDeclaration* _d);
  };
}

#endif /* Translator_BeagleModel_hpp */
