#ifndef CodeGenerator_CPPCodeGenerator_hpp
#define CodeGenerator_CPPCodeGenerator_hpp

class CPPCodeGenerator : public ImpleCodeGenerator
{
private:
    std::list<Plugin*> plugins;
public:
    void addPlugin(Plugin* plugin){
        // 1. check the language is the same as the class
        // 2. avoid redundant addition
    }

    Plugin* getFirstPlugin(){
        // iterate the list and return the first usable plugin
        // otherwise return null
    }

    Plugin* getPlugin(std::string algorithmId){
        // get the correspoding plugin in the list
        // otherwise return null
    }

    Plugin* rmPlugin(std::string pluginName){

    }

    //-----Header File-----

    void generateHeaderFile(std::string path, Process* proc){
        // generate lib used 
    }

    //-----Src File-----
    void generateSrcFile(std::string path, Process* proc){
        this->generateMethods(proc);
        this->generateMain(proc);
    }

    std::string generateMethods(Process* proc){
        // for each methods in proc
        // if it is simple method
            
        // if it is en/decryption function
    }

    std::string generateMain(Process* proc){

    }

    //-----Encryption and Decryption-----
    std::string generateDecryptAlgorithm(std::string algorithmId){
        // find the plugin in the list of the algorithm
        Plugin* p = this->getPlugin(algorithmId);
        p->generateDecryptAlgorithm();
    }


    std::string generateEncryptAlgorithm(std::string algorithmId){
        // find the plugin in the list of the algorithm
        Plugin* p = this->getPlugin(algorithmId);
        p->generateEncryptAlgorithm();
    }

    std::string generateDecryptAlgorithm(){
        // find the first usable plugin in the list
        Plugin* p = this->getFirstPlugin();
        p->generateDecryptAlgorithm();
    }

    std::string generateEncryptAlgorithm(){
        Plugin* p = this->getFirstPlugin();
        p->generateEncryptAlgorithm();
    }

    //-----Gen-----
    void generateCode(std::string path, Process* proc){
        this->generateHeaderFile(path, proc);
        this->generateSrcFile(path, proc);
    }
    CPPCodeGenerator(/* args */);
    ~CPPCodeGenerator();
};

CPPCodeGenerator::CPPCodeGenerator(/* args */)
{
}

CPPCodeGenerator::~CPPCodeGenerator()
{
}


#endif