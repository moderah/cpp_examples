



#include <iostream>
#include <iosfwd>

#include "base.h"

namespace BASE {



	base::base()
		: m_name("base class\n\n")
	{
		std::cout << "\n\nbase class constructed!\n\n";
	};

	base::base(const base& base)
		: m_name("obj base class\n\n")
	{
		std::cout << "\n\nbase class constructed!\n\n";
	};

	base::~base()
	{
		std::cout << "\n\nbase class destructed!\n\n";
	};


	float base::get_f() 
	{
		return f_;
	};

	
	void print_on(std::ostream& os) 
	{
		std::cout << "base";
	}

	std::ostream& operator<<(std::ostream& os, base& base)
	{
		
			std::ostream::sentry const cerberus(os);
			if (cerberus) 
			{
				base.print_on(os);
			}
		return os;
		
		
	}

}