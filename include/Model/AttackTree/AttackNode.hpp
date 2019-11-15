//
//  AttackNode.hpp
//
//  Created by LauZyHou on 2019/11/15.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_AttackNode_hpp
#define Model_AttackNode_hpp
#include "./Attack.hpp"
#include <list>
using std::list;

namespace esc {
	enum nodetype { BEFORE, AFTER, AND, OR, XOR, SEQUENCE };   ///< all types of AttackNode.

	/// \brief the node for attack tree.
	class AttackNode {
	private:
		Attack* resultingAttack;
		list<Attack*> inputAttacks;
		list<int> inputValues;

	protected:
		nodetype type;
	};

	/// \brief the node about temporal relationship.
	class TimeNode : public AttackNode {
	private:
		int time;
	};

	class BeforeNode : public TimeNode {
	public:
		BeforeNode() {
			this->type = BEFORE;
		}
	};

	class AfterNode : public TimeNode {
	public:
		AfterNode() {
			this->type = AFTER;
		}
	};

	/// \brief the node about logical operations.
	class BoolNode : public AttackNode {

	};

	class ANDNode : public BoolNode {
	public:
		ANDNode() {
			this->type = AND;
		}
	};

	class ORNode : public BoolNode {
	public:
		ORNode() {
			this->type = OR;
		}
	};

	class XORNode : public BoolNode {
	public:
		XORNode() {
			this->type = XOR;
		}
	};

	/// \brief the node about sequence.
	class SequenceNode : public AttackNode {
	public:
		SequenceNode() {
			this->type = SEQUENCE;
		}
	};

}

#endif /* Model_AttackNode_hpp */
