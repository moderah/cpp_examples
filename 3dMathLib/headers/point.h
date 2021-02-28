   #pragma once




#ifndef POINT_H
#define POINT_H
#include "../src/pch.h"


  //a 3d point class that should hold 3 variables in a vector
	class point {
  private:

    //create and hold point variables
    double x, y, z;
    std::vector<double> p_vectorPoint; //point vector

    const char* class_Name = "point";

	public:

		point(); //default constructor
		
		point(const point& p); //copy constructor
		point(double x, double y, double z); //identity constructor
		~point(); // destructor

    //method that should set p_vectorPoint with given params
    void setVectorPoint(double x,double y, double z);
    //method to get p_vectorPoint which returns a vector of doubles
    std::vector<double> getVectorPoint();

    void displayPoint();

    void setPoint_x(double x);
    void setPoint_y(double y);
    void setPoint_z(double z);

    double getPoint_x();
    double getPoint_y();
    double getPoint_z();

    friend std::ostream& operator<<(std::ostream& os, const point& p){
      os<<"("<<p.x<<","<<p.y<<","<<p.z<<")\n";
      return os;
    };

    //friend std::istream& operator>>(std::istream& os, point& p){
    //  os>>"("<< p.x<<" "<<p.y <<","<< p.z<<")";
    //  return os;
    //};
	};





#endif //POINT_H
