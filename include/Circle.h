#pragma once
#include <math.h>
#include <iostream>
#include <iomanip>

class Circle {
	private:
		double radius;
		double ference;
		double area;
		static const double pi;
	public:
		Circle(double);
		void setRadius(double r);
		void setFerence(double f);
		void setArea(double a);
		double getRadius();
		double getFerence();
		double getArea();
};