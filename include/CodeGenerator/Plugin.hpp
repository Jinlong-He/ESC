#ifndef CodeGenerator_Plugin_hpp
#define CodeGenerator_Plugin_hpp

// a plugin interface for 
namespace esc{
    class Plugin
    {
    private:
        std::string pluginName;
        std::string pluginLanguage;
        std::string pluginAlgorithmId;
    public:
        // TODO later modify the virtual function for more algorithms
        // TODO arguments of the function
        virtual std::string generateDecryptAlgorithm()=0;

        virtual std::string generateEncryptAlgorithm()=0;

        Plugin(/* args */);
        ~Plugin();
    };

    Plugin::Plugin(/* args */)
    {
    }

    Plugin::~Plugin()
    {
    }
}





#endif