//
//  AttackTree.hpp
//
//  Created by LauZyHou on 2019/11/15.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_AttackTree_hpp
#define Model_AttackTree_hpp
#include "./AttackNode.hpp"
#include "./Attack.hpp"
#include <string>
#include <list>
using std::string;
using std::list;

namespace esc {
	/// \brief attack tree protocal.
	class AttackTree {
	private:
		list<AttackNode*> nodes;
		list<Attack*> attacks;

	public:
		AttackNode* faultyNode;
		string errorOfFaultyNode;
	};
}

#endif /* Model_AttackTree_hpp */
