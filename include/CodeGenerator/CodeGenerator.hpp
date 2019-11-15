//
//  CodeGenerator.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef CodeGenerator_CodeGenerator_hpp
#define CodeGenerator_CodeGenerator_hpp

#include "../Model/Model.hpp"

namespace esc {
    class CodeGenerator {
        protected:
            Model* model;
        public:
            Model* getModel() const;
            virtual void generateCode(path){
                
            }
    };
}

#endif
