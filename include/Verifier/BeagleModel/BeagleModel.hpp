//
//  BeagleModel.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Verifier_BeagleModel_hpp
#define Verifier_BeagleModel_hpp
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
    BeagleModel(list<BeagleModule*> _modules, list<BeagleProperty*> _properties, list<BeagleDeclaration*> _declarations);
    void addModule(BeagleModule* _module);
    void addProperties(BeagleProperties _property);
    void addDeclaration(BeagleDeclaration* _declarations);
  };
}

#endif /* Verifier_BeagleModel_hpp */
