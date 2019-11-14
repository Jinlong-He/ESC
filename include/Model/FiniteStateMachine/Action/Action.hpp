//
//  Action.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Action_hpp
#define Model_Action_hpp
#include "../Term/AttributeTerm.hpp"

namespace esc {
	/// \breif the Action on the transition
	class Action {
	public:
		Action();
        Action(const string& toParse);

        virtual string to_stirng() const;
	};
}

#endif /* Model_Action_hpp */
