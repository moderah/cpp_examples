#include "pch.h"
#include "Rational.h"



namespace Fractions {

	//CONSTRUCTORS AND DESTRUCTOR
	rational::rational()
	{
		std::cout << *this;
	};
	rational::rational(const rational& rhs)
		: _n_(rhs._n_), _d_(rhs._d_), val_(rhs.val_){
		std::cout << *this;
	};

	 rational::rational(double& val)
		: _n_(0), _d_(0), val_(val)
	{
		std::cout << *this;
	};
	rational::rational(int n, int d)
		: _n_(n), _d_(d), val_(_n_ / _d_)
	{
		std::cout << *this;
	};
	rational::~rational()
	{
		
	};






	void rational::swap(rational& rhs)
	{
		std::swap(_n_, rhs._n_);
		std::swap(_d_, rhs._d_);
		std::swap(val_, rhs.val_);
	};


	//OVERLOADED OPERATORS


	//EQUALS(ASSIGN)
	rational rational::operator=(const rational& rhs)
	{
		rational tmp(rhs);
		swap(tmp);
		return rational(*this);
	};

	//		EQUALS THE SUM OF 

	rational rational::operator+=(const rational& rhs)
	{
		_n_ += rhs._n_;
		_d_ *= rhs._d_;

		return rational(*this);

	};
	//		EQUALS THE DIFFERENCE OF

	rational rational::operator-=(const rational& rhs)
	{
		_n_ -= rhs._n_;
		_d_ *= rhs._d_;
		Reduce(*this);

		return rational(*this);

	};


	void rational::print_on(std::ostream& os) const
	{
		os << this->_n_ << " / " << this->_d_<<std::endl;
	};

	bool operator==(const rational& lhs, const rational& rhs)
	{
		return lhs.val_ == rhs.val_;
	};
	//ADDING

	rational const operator+(const rational& lhs, const rational& rhs)
	{
		int numer;
		int denom;

		numer = lhs._n_ + rhs._n_;
		denom = lhs._d_ * rhs._d_;

		return rational(numer, denom);
	};

	//SUBTRACTING

	rational const operator-(const rational& lhs, const rational& rhs)
	{
		int numer;
		int denom;

		numer = lhs._n_ - rhs._n_;
		denom = lhs._d_ * rhs._d_;

		return rational(numer, denom);
	};


	//OUTPUT OPERATOR
	std::ostream& operator<< (std::ostream& os, const rational& rhs) {
		std::ostream::sentry const cerberus(os);
		if (cerberus)
		{
			rhs.print_on(os);
		}

		return os;
	};
	//INPUT OPERATOR
	std::istream& operator>> (std::istream& is, rational& rhs) {
		std::cin >> rhs._n_ >> rhs._d_;

		return is;
	};












	//INCREMENT AND DECREMENT OPERATORS

	//INCREMENT 
	rational operator++(const rational& rhs)
	{
		return rational(rhs._n_ + 1, rhs._d_);
	};

	//DECREMENT
	rational operator--(rational const& rhs)
	{
		return rational(rhs._n_ - 1, rhs._d_);
	};




	//MULTIPLYING

	rational rational::operator*(const rational& rhs) {

		_d_ *= rhs._d_;
		_n_ *= rhs._n_;

		return rational(_n_, _d_);

	};


	//DIVIDING

	rational rational::operator/(rational const& rhs) {


		_d_ *= rhs._n_;
		_n_ *= rhs._d_;
		Reduce(*this);

		return rational(*this);

	};



	//    RELATIONAL OPERATORS

	//    IS EQUAL TO





	//    IS NOT EQUAL TO

	bool operator!=(const rational& lhs, const rational& rhs) {
		bool truth;
		if ((lhs._n_ / lhs._d_) != (rhs._n_ / rhs._d_)) {
			truth = true;
		}
		else {
			truth = false;
		}
		return truth;
	};




	//		IS LESS THAN

	bool operator<(const rational& lhs, const rational& rhs)
	{
		return lhs.val_ < rhs.val_;
	};





	//		IS GREATER THAN

	bool operator>(const rational& lhs, const rational& rhs)
	{
		bool truth;
		if ((lhs._n_ / lhs._d_) > (rhs._n_ / rhs._d_)) {
			truth = true;
		}
		else {
			truth = false;
		}
		return truth;
	};




	rational Reduce(rational& rhs) {
		for (int i = rhs._d_ * rhs._n_; i > 1; i--) {
			if ((rhs._d_ % i == 0) && (rhs._n_ % i == 0)) {
				rhs._d_ /= i;
				rhs._n_ /= i;
			}
		}
		return rational(rhs);
	};



};