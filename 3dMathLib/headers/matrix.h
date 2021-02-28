#pragma once


#ifndef MATRIX_H
#define MATRIX_H


#include "../src/pch.h"
#include "point.h"
#include "VECTOR_4.h"

class matrix {
private:

	VECTOR_4 v0;
	VECTOR_4 v1;
	VECTOR_4 v2;
	VECTOR_4 v3;

	std::vector<VECTOR_4 > matrix_;
	const char* class_Name = "matrix";
public:

	matrix();
	matrix(const matrix& m);
	matrix(
			 const VECTOR_4& v1, const VECTOR_4& v2,
			 const VECTOR_4& v3, const VECTOR_4& v4
		 );
	~matrix();

	void addRowToMatrix(const VECTOR_4 & vct4);

	friend std::ostream& operator<<(std::ostream& os, const matrix& m){
		os <<"["<< m.v0<<" ,"<<m.v1<<" ,"<<m.v2<<" ,"<< m.v3<<"]";
	};
};


#endif //MATRIX_H
