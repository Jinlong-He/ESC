//
//  Vertex.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Vertex_hpp
#define Model_Vertex_hpp
#include <string>
#include <list>
using std::string;
using std::list;

namespace esc{
    class Edge;

	/// \brief State in FSM.
	class Vertex {
	private:
		string name; //< State Name
		list<Edge*> nexts;
	public:
		/// constructor
		Vertex(string _name) : name(_name) {}

		Vertex(string _name, list<Edge*> _nexts) : name(_name), nexts(_nexts) {}

		/// \brief set the State name
		/// \param string newName : new state name
		void setName(string _Name)
		{
			this.name = _Name;
		}

		/// \brief get the state name
		/// \return the state name
		string getName()
		{
			return name;
		}
	};
}

#endif /* Model_Vertex_hpp */
