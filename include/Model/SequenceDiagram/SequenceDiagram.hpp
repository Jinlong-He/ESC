//
//  SequenceDiagram.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_SD_SequenceDiagram_hpp
#define Model_SD_SequenceDiagram_hpp
#include <list>
#include "SdVertex.hpp"
using std::list;

namespace esc {
    class Model;

    /// \brief SequenceDiagram class
	class SequenceDiagram {
    public:
		SdVertex* mkSdVertex(string _name, Process* _process);
	private:
    	list<SdVertex*> vertexes;       //< the set of the states of this sd.
        SdVertex* startVertex;          //< the start vertex.
    	Model* model;                   //< the SequenceDiagram belongs to the model.
	};
}

#endif /* Model_SD_SequenceDiagram_hpp */
