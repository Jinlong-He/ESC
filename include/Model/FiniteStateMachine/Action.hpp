//
//  Action.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Action_hpp
#define Model_Action_hpp
#include "AttributeTerm.hpp"
#incldue "Term.hpp"

namespace esc {
	/// \breif the Action on the transition
	/// \brief action := <leftHand, rightHand>
	class Action {
	private:
		AttributeTerm* leftHand; //< leftHand of the assignment
		Term* rightHand; //< rightHand can be an attribute or a method call.
	public:
		Action();
		Action(AttributeTerm* _leftHand, Term* _rightHand);
		bool containAMethodCall();
	}
}

#endif /* Model_Action_hpp */
