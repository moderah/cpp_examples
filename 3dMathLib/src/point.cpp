

#include "pch.h"
#include "../headers/point.h"

point::point()
	: x(0), y(0), z(0)
{
	setPoint_x(x);
	setPoint_y(y);
	setPoint_z(z);
	this->setVectorPoint(x,y,z);
};


point::point(const point& p)
	: x(p.x), y(p.y), z(p.z)
{
	setPoint_x(x);
	setPoint_y(y);
	setPoint_z(z);
	this->setVectorPoint(x,y,z);
}

point::point(double x1, double y1, double z1)
	: x(x1), y(y1), z(z1)
{
	setPoint_x(x);
	setPoint_y(y);
	setPoint_z(z);
	this->setVectorPoint(x,y,z);
}

point::~point() {};

void point::setVectorPoint(double x, double y, double z){
	if(p_vectorPoint.size() != 0){
		p_vectorPoint.clear();
		p_vectorPoint.push_back(x);
		p_vectorPoint.push_back(y);
		p_vectorPoint.push_back(z);
	}else{
		p_vectorPoint.push_back(x);
		p_vectorPoint.push_back(y);
		p_vectorPoint.push_back(z);
	}
};

void point::displayPoint(){
	std::cout<<"<"<< p_vectorPoint[0]<<",";
	std::cout<< p_vectorPoint[1]<<",";
	std::cout<< p_vectorPoint[2]<<">";
};

std::vector<double> point::getVectorPoint(){
	this->displayPoint();
	return p_vectorPoint;
};

void point::setPoint_x(double x){
	this->x = x;
};
void point::setPoint_y(double y){
	this->y = y;
};
void point::setPoint_z(double z){
	this->z = z;
};

double point::getPoint_x(){
	return x;
};
double point::getPoint_y(){
	return y;
};
double point::getPoint_z(){
	return z;
};

/*
		set operator overloads
 */
