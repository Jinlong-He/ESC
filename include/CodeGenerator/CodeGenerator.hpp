#include "Model.hpp"
#include <string>

class CodeGenerator {
    protected:
        Model* model;
    public:
        Model* getModel() const{
            
        }

        virtual void generateCode()=0;
}