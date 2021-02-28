#pragma once


#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

#include <string>


namespace DERIVED {
	using namespace BASE;
	class derived : public base {
	public:


		derived();
		derived(const derived& derive);
		~derived();

		void print_on(std::ostream& os);

	protected:

		float f_;

	private:

		std::string _name;
	};


}

#endif DERIVED_H