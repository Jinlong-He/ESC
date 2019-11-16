//
//  XmlParser.hpp
//
//  Created by LauZyHou on 2019/11/16.
//  Copyright © 2019 All rights reserved.
//

#ifndef Utils_XmlParser_hpp
#define Utils_XmlParser_hpp
#include "../../Model/Model.hpp"
#include "../../../DataStructure/Process.hpp"
#include "../../Model/FiniteStateMachine/FiniteStateMachine.hpp"
#include "../../Model/Pragma/Property.hpp"
#include "../../Model/Pragma/InitialKnowledge.hpp"
#include "../../Model/SequenceDiagram/SequenceDiagram.hpp"
#include "../../Model/AttackTree/AttackTree.hpp"
#include "./Xml.hpp"
#include <list>

using std::list;

namespace esc {
	/// \brief Interconversion of XML and model
	class XmlParser {
	public:
		static Model* forward(const Xml& xml);							//< from xml to model.
		static Xml* backward(const Model& model);						//< from model to xml.

		// The following methods can be used to generate the model of xml.
		static Process* parseProcess(const XmlNode& subxml);				//< parse one process from sub xml.
		static FiniteStateMachine* parseFST(const XmlNode& subxml);			//< parse one fst from sub xml.
		static Property* parseProperty(const XmlNode& subxml);				//< parse one model property from sub xml.
		static InitialKnowledge* parseIK(const XmlNode& subxml);			//< parse one initial knowledge from sub xml.
		static SequenceDiagram* parseSequenceDiagram(const XmlNode& subxml);//< parse one sequence diagram from sub xml.
		static AttackTree* parseAttackTree(const XmlNode& subxml);			//< parse one attack tree from sub xml.
	};
}

#endif /* Utils_XmlParser_hpp */

