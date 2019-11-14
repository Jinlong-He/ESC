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
	class Guard {
	private:
		string name;

	public:
		string getGuardName();

		void setGuardByString(string _guard);
	};
}

#endif /* Model_Guard_hpp */
