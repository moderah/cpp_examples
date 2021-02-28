#pragma once

#include "base.h"
#include "derived.h"

#ifndef DERIVED2_H
#define DERIVED2_H

namespace DERIVED2 
{
	using namespace DERIVED;
	using namespace BASE;
	class derived2 : public base
	{
	public:

		derived2();
		derived2(const derived2& derive);
		~derived2();


		void print_on(std::ostream& os);


	protected:

		float f_;

	private:


		std::string m_name;



	};




}





#endif DERIVED2_H