

#include <iostream>

#include "derived.h"

namespace DERIVED 
{
 

	derived::derived() 
		: _name("::name of default derived class::"), f_(5)
	{
		std::cout << "\n\nderived class constructed!\n\n";
	};

	derived::derived(const derived& derive)
		: _name("::name of derived class::"), f_(5)
	{
	
	};

	derived::~derived() 
	{
		std::cout << "\n\nderived class destructed!\n\n";
	};


	void derived::print_on (std::ostream& os)  
	{
		os << "derived obj";
	};

	//std::ostream& operator<<(std::ostream& os, derived& drvd)
	//{
	//
	//	std::ostream::sentry cerberus(os);
	//	if (cerberus)
	//	{
	//		drvd.print_on(os);
	//	}
	//	return os;
	//
	//
	//}
}