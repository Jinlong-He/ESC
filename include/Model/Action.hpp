//
//  Action.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Action_hpp
#define Model_Action_hpp

namespace esc {
	class Action {
	private:
		Attribute* leftHand;
		Term* rightHand;
	public:
		bool isAMethodCall();
		bool isAVariableSetting();
	}
}

#endif /* Model_Action_hpp */