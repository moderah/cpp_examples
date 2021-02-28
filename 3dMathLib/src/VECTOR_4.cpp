#include "pch.h"
#include "../headers/VECTOR_4.h"



VECTOR_4::VECTOR_4() :
px(this->px), py(this->py), pz(this->pz), pw(this->pw)
{
};


//copy constructor
VECTOR_4::VECTOR_4(const VECTOR_4& vec) :
px(vec.px), py(vec.py), pz(vec.pz), pw(vec.pw)
{
	//this = vec;
};

//VECTOR_4::VECTOR_4(const point xi, const point yi, const point zi, const point wi)
//{
//	setVecOfPoints(xi,yi,zi,wi);
//};
//
//VECTOR_4::VECTOR_4(point xf, point yf, point zf, point wf) :
//px(xf), py(yf), pz(zf), pw(wf)
//{
//	setVecOfPoints(xf,yf,zf,wf);
//};

VECTOR_4::VECTOR_4(const point& xf, const point& yf, const point& zf, const point& wf) :
px(xf), py(yf), pz(zf), pw(wf)
{
	setVecOfPoints(xf,yf,zf,wf);
};

VECTOR_4::~VECTOR_4() {};

point VECTOR_4::getPoint_px(){
	return px;
};
point VECTOR_4::getPoint_py(){
	return py;
};
point VECTOR_4::getPoint_pz(){
	return pz;
};
point VECTOR_4::getPoint_pw(){
	return pw;
};

void VECTOR_4::setPoint_px(double x, double y, double z){
	VECTOR_4::px.setPoint_x(x);
	VECTOR_4::px.setPoint_y(y);
	VECTOR_4::px.setPoint_z(z);
};
void VECTOR_4::setPoint_py(double x, double y, double z){
	VECTOR_4::py.setPoint_x(x);
	VECTOR_4::py.setPoint_y(y);
	VECTOR_4::py.setPoint_z(z);
};
void VECTOR_4::setPoint_pz(double x, double y, double z){
	pz.setPoint_x(x);
	pz.setPoint_y(y);
	pz.setPoint_z(z);
};
void VECTOR_4::setPoint_pw(double x, double y, double z){
	pw.setPoint_x(x);
	pw.setPoint_y(y);
	pw.setPoint_z(z);
};

void VECTOR_4::setVecOfPoints(
		point x,
		point y,
		point z,
		point w  ){
	VECTOR_4::px = x;
	VecOfPoints.push_back(px);
	VECTOR_4::py = y;
	VecOfPoints.push_back(py);
	VECTOR_4::pz = z;
	VecOfPoints.push_back(pz);
	VECTOR_4::pw = w;
	VecOfPoints.push_back(pw);
};

//void VECTOR_4::setVecOfPointsPTR(
//		point *x,
//		point *y,
//		point *z,
//		point *w  ){
//	px = *x;
//	VecOfPointsPTR.push_back(px);
//	py = *y;
//	VecOfPointsPTR.push_back(py);
//	pz = *z;
//	VecOfPointsPTR.push_back(pz);
//	pw = *w;
//	VecOfPointsPTR.push_back(pw);
//};

std::vector<point> VECTOR_4::getVecOfPoints() {
	return this->VecOfPoints;
};

//std::vector<point*> VECTOR_4::getVecOfPointsPTR(){
//	std::cout<< *this->getPoint_px()<<"\n\n";
//	std::cout<< *this->getPoint_py()<<"\n\n";
//	std::cout<< *this->getPoint_pz()<<"\n\n";
//	std::cout<< *this->getPoint_pw()<<"\n\n";
//	return *this->vecOfPointsPTR;
//};
