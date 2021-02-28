
#include "pch.h"
#include "../headers/matrix.h"


matrix::matrix() :
v0(this->v0),v1(this->v1),v2(this->v2),v3(this->v3)
{
	this->addRowToMatrix(v0);
	this->addRowToMatrix(v1);
	this->addRowToMatrix(v2);
	this->addRowToMatrix(v3);
};

matrix::matrix(const matrix& m) :
v0(m.v0),v1(m.v1),v2(m.v2),v3(m.v3)
{
	this->addRowToMatrix(v0);
	this->addRowToMatrix(v1);
	this->addRowToMatrix(v2);
	this->addRowToMatrix(v3);
};

matrix::matrix(
		 const VECTOR_4& v1, const VECTOR_4& v2,
		 const VECTOR_4& v3, const VECTOR_4& v4
	 )
	 : v0(v1), v1(v2), v2(v3), v3(v4)
{
	this->addRowToMatrix(v0);
	this->addRowToMatrix(v1);
	this->addRowToMatrix(v2);
	this->addRowToMatrix(v3);
};

matrix::~matrix()
{

};


void matrix::addRowToMatrix(const VECTOR_4& vct4){
	matrix_.push_back(vct4);
}
