#ifndef RATIONAL_H
#define RATIONAL_H

#pragma once
#include "pch.h"


namespace Fractions {


	class rational {
	public:

		rational();
		rational(double& val);
		rational(int n, int d);
		rational(const rational& rhs);
		~rational();

		void swap(rational& rhs);


		//overloaded operators

		rational operator=(rational const& rhs);

		rational operator+=(rational const& rhs);
		rational operator-=(rational const& rhs);


		rational operator/(rational const& obj);
		rational operator*(rational const& obj);

		void print_on(std::ostream& os) const;


		friend bool operator==(rational const& lhs, rational const& rhs);

		friend bool operator<(rational const& lhs, rational const& rhs);

		friend bool operator>(rational const& lhs, rational const& rhs);

		friend bool operator!=(rational const& lhs, rational const& rhs);


		int _n_ = 0;
		int _d_ = 0;

	private:

		double val_ = _n_ / _d_;

	};


	rational operator++(rational const& rhs);

	rational operator--(rational const& rhs);

	std::istream& operator>> (std::istream& is, rational& rhs);


	std::ostream& operator<< (std::ostream& os, rational const& rhs);




	rational const operator+(rational const& lhs,
		rational const& rhs);

	rational const operator-(rational const& lhs,
		rational const& rhs);

	rational Reduce(rational& rhs);



};



#endif 
