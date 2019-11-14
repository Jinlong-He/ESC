//
//  Term.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Term_hpp
#define Model_Term_hpp

#include <string>
using std::string;

namespace esc {
	/// \breif the term in the action has two inheritance class AttributeTerm and MethodTerm.
	class Term {
	private:

	public:
		Term(const string& toParse);

		virtual bool isValidName(string _name) = 0;
		virtual bool containAMethodCall() = 0; //< check if the term has a MethodTerm subclass.
	};
}

#endif /* Model_Term_hpp */
