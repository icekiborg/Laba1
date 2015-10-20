#pragma once
#include <cmath>
class Triangle
{
private:
	double x[3];
	double y[3];
	double dl[3];
	double per;
public:
	Triangle();
	Triangle(double x1, double y1, double x2, double y2, double x3, double y3);
	Triangle(Triangle &t);
	double getCoordX(int i);
	double getCoordY(int i);
	double getDl(int i);
	double getPer();
	void setCoord(double tempx, double tempy, int i);
	void length();
	void perimeter();
};

