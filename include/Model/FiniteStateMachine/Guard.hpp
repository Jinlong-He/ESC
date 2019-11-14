//
//  Guard.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Guard_hpp
#define Model_Guard_hpp
#include <string>
using std::string;

namespace esc {
	/// \brief Guard condition on the transition.
	class Guard {
	private:
		string name; //< guard name.

	public:
		Guard();
		Guard* createFromString(string _guard);
		string getGuardName();
	};
}

#endif /* Model_Guard_hpp */
