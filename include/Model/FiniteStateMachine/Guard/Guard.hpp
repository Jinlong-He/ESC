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
	public:
		Guard();
        Guard(const string& toParse);

        virtual string to_stirng() const;
	};
}

#endif /* Model_Guard_hpp */
