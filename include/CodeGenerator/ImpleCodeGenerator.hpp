#ifndef CodeGenerator_ImpleCodeGenerator_hpp
#define CodeGenerator_ImpleCodeGenerator_hpp

#include "CodeGenerator.hpp"
#include "Plugin.hpp"

namespace esc{
    class ImpleCodeGenerator : public CodeGenerator {
    private:

    public:
        ImpleCodeGenerator(/* args */);
        ~ImpleCodeGenerator();
        virtual std::string generateDecryptAlgorithm()=0;
        virtual std::string generateEncryptAlgorithm()=0;
        virtual void generateCode(std::string path, Process* proc){
            
        }
    };

    ImpleCodeGenerator::ImpleCodeGenerator(/* args */){
    
    }

    ImpleCodeGenerator::~ImpleCodeGenerator(){
    }
}





#endif