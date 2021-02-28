#pragma once


#include "base.h"




namespace DERIVED3 
{
	using namespace BASE;
	class derived3 : public base{
	public:
		 
		derived3();
		derived3(const derived3& derive);
		~derived3();

		void print_on();

	private:

		float f_;


	};







}