#include "task1.h"

double calcDelta() {
	double oldRadius = 6378100.0;
	Circle Earth = oldRadius; // Earth(oldRadius)
	Earth.setFerence(Earth.getFerence() + 1);
	return Earth.getRadius() - oldRadius;
}

double calcCost() {
	double radius_of_pool = 3.0;
	Circle SwimmingPool(radius_of_pool);
	Circle Track(radius_of_pool + 1);
	return (Track.getArea() - SwimmingPool.getArea()) * 1000 + Track.getFerence() * 2000;
}