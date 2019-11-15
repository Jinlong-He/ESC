//
//  Xml2Model.hpp
//
//  Created by LauZyHou on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Utils_Xml2Model_hpp
#define Utils_Xml2Model_hpp
#include "Xml.hpp"
#include "../../Model/Model.hpp"

namespace esc {
	/// \brief Interconversion of XML and model
	class Xml2Model final {
	public:
		static Model* forward(const Xml& xml);		//< from xml to model.
		static Xml* backward(const Model& model);	//< from model to xml.
	};
}

#endif /* Utils_Xml2Model_hpp */
