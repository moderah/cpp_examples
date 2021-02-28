
#include "derived2.h"


namespace DERIVED2 
{


	derived2::derived2() 
		: m_name("derived2"), f_(4)
	{
	
	};
	derived2::derived2(const derived2& derive) 
		: m_name("derived2 obj"), f_(4)
	{
	
	};
	derived2::~derived2() 
	{
	
	};




	void derived2::print_on(std::ostream& os)
	{
		os << "derived2 obj";
	};


}





