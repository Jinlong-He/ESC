//
//  Vertex.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_SdVertex_hpp
#define Model_SdVertex_hpp
#include <string>
#include "../FiniteStateMachine/Term.hpp"
using std::string;

namespace esc{
    class SdEdge;
    class Process;

	/// \brief State in SD.
	class SdVertex {
	private:
		string name;        //< State Name
        Process* process;
        Term* term;
        SdVertex* next;
	public:
		/// constructor
		SdVertex(string _name);
		SdVertex(string _name, Process* _process);

		const string& getName();
		void setName(string _Name);

        Process* getProcess() const;
        void setProcess(Process* _process);

        Term* getTerm() const;
        void setTerm(Term* _term);

        SdVertex* getNextVertex() const;
        void setNextVertex(SdVertex* _next);

        void addNextVertex(Term* _term, SdVertex* _next);
	};
}

#endif /* Model_SdVertex_hpp */
