//
//  Xml.hpp
//
//  Created by LauZyHou on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Utils_Xml_hpp
#define Utils_Xml_hpp
#include <string>
#include <list>
#include <map>
using std::string;
using std::list;
using std::map;

namespace esc {
	/// \brief generic xml utility class
	class Xml {
	private:
		XmlNode* root;
		Dtd* dtd = nullptr;
	public:
		Xml(const string& filePath);
	};

	/// \brief xml "Document Type Definition"
	class Dtd {
	public:

	};

	/// \brief xml tree node
	class XmlNode {
	public:
		string name;					//< node name
		map<string, string> properties;	//< xml properties on current node
		list<XmlTree*> children;		//< child nodes
		bool isLeaf;					//< true if it has no child nodes, and use content string
		string content;
	};

}

#endif /* Utils_Xml_hpp */
