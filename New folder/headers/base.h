#pragma once


#ifndef BASE_H
#define BASE_H

#include <string>


namespace BASE {

	class base {
	private:

		std::string m_name;
		float f_;
	protected:
		//protected members are available to the derived classes
		//and friend members.

	public:

		base();
		base(const base& base);
		~base();

		//does not need to be virtual
		// if its protected we can access it anyway
		float get_f();
		virtual void print_on(std::ostream& os)=0;

	};


	std::ostream& operator<<(std::ostream& os, base& base);


}
#endif BASE_H