//
//  Model.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Model_hpp
#define Model_Model_hpp 
#include "Process/Process.hpp"
#include "Pragma/Property.hpp"
#include "Pragma/InitialKnowledge.hpp"

namespace esc {
    /// \brief the model in esc.
    class Model {
    public:
        Model();
        ~Model() {
            //delete processes, properties, initialknowledges.
        }

        Process* mkProcess();

        ConfidentialProperty*
        mkConfidentialProperty(Process* _process, Attribute* _attribute);

        AuthenticityProperty* 
        mkAuthenticityProperty(Process* _process1, Vertex* _vertex1, Attribute* _attribute1,
                               Process* _process2, Vertex* _vertex2, Attribute* _attribute2);

        InitialKnowledge* 
        mkInitialKnowledge(Process* _process, Attribute* attribute);
    private:
        list<Process*> processes;
        list<Property*> properties;
        list<InitialKnowledge*> initialKnowledges;
    };
}

#endif /* Model_Model_hpp */
