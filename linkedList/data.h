#pragma once

#include <iostream>
#include <string>

class data {
public:

	enum components {
		x, y, z
	};

	std::string getName (){
		return _name;
	}


protected:




private:

	std::string _name;

};