

#include "derived3.h"

#include <iostream>





namespace DERIVED3
{

	derived3::derived3() 
	{
		std::cout << "derived3 constructed\n";
	};

	derived3::derived3(const derived3& derive)
	{
		std::cout << "derived3 constructed\n";
	};

	derived3::~derived3() 
	{
		std::cout << "derived3 class destructed\n";
	}

	void derived3::print_on()
	{
		std::cout << f_;
	}
}