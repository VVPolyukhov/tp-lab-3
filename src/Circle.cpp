#include "Circle.h"

const double Circle::pi = 3.14;

Circle::Circle(double r) {
	radius = r;
	ference = 2 * pi * r;
	area = pi * r * r;
}
void Circle::setRadius(double r) {
	radius = r;
	ference = 2 * pi * r;
	area = pi * r * r;
}
void Circle::setFerence(double f) {
	ference = f;
	radius = ference / (2 * pi);
	area = radius * radius * pi;
}
void Circle::setArea(double a) {
	area = a;
	radius = sqrt(area / pi);
	ference = 2 * pi * radius;
}
double Circle::getRadius(){
	return radius;
}
double Circle::getFerence(){
	return ference;
}
double Circle::getArea(){
	return area;
}