#pragma once

#ifndef VECTOR_4_H
#define VECTOR_4_H
	#include "../src/pch.h"
	#include "point.h"

class VECTOR_4: public point {
private:

	const char* class_Name = "VECTOR_4";

	std::vector<point> VecOfPoints;
	//std::vector<point*> vecOfPointsPTR;

	point px ={0,0,0};
	point py ={0,0,0};
	point pz ={0,0,0};
	point pw ={0,0,0};

public:
	VECTOR_4();
	VECTOR_4(const VECTOR_4& vec);
	VECTOR_4(const point& xi, const point& yi, const point& zi, const point& wi);
	//VECTOR_4(point xf, point yf, point zf, point wf);
	//VECTOR_4(const point xf, const point yf, const point zf, const point wf);
	~VECTOR_4();

	std::vector<point> getVecOfPoints();

	//std::vector<point*> getVecOfPointsPTR();

	void setVecOfPoints(
			point x,
			point y,
			point z,
			point w  );

 	//void setVecOfPointsPTR(
 	//		point *x,
 	//		point *y,
 	//		point *z,
 	//		point *w );

	point getPoint_px();
	point getPoint_py();
	point getPoint_pz();
	point getPoint_pw();

  void setPoint_px(double x, double y, double z);
  void setPoint_py(double x, double y, double z);
  void setPoint_pz(double x, double y, double z);
  void setPoint_pw(double x, double y, double z);

	friend std::ostream& operator<<(std::ostream& os, VECTOR_4& v4){
		os
		<<"[ "<<v4.getPoint_px()<<", "<<v4.getPoint_py()<<", "<<v4.getPoint_pz()<<v4.getPoint_pw()<<"],"
		<<"[ "<<v4.getPoint_px()<<", "<<v4.getPoint_py()<<", "<<v4.getPoint_pz()<<v4.getPoint_pw()<<"],"
		<<"[ "<<v4.getPoint_px()<<", "<<v4.getPoint_py()<<", "<<v4.getPoint_pz()<<v4.getPoint_pw()<<"],"
		<<"[ "<<v4.getPoint_px()<<", "<<v4.getPoint_py()<<", "<<v4.getPoint_pz()<<v4.getPoint_pw()<<"]";
		return os;
	};


};



#endif //VECTOR_4_H
