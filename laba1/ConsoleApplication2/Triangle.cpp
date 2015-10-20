#include "Triangle.h"
Triangle::Triangle()
{
	for (int i = 0; i < 3; i++)
	{
		x[i] = 0;
		y[i] = 0;
		dl[i] = 0;
		per = 0;
	}
}

Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
	x[0] = x1;
	x[1] = x2;
	x[2] = x3;
	y[0] = y1;
	y[1] = y2;
	y[2] = y3;
	dl[0] = dl[1] = dl[2] = 0;
	per = 0;
}

Triangle::Triangle(Triangle & t)
{
	for (int i = 0; i < 3; i++)
	{
		x[i] = t.x[i];
		y[i] = t.y[i];
		dl[i] = t.dl[i];
	}
	per = t.per;
}

double Triangle::getCoordX(int i)
{
	return x[i];
}

double Triangle::getCoordY(int i)
{
	return y[i];
}

double Triangle::getDl(int i)
{
	length();
	return dl[i];
}

double Triangle::getPer()
{
	perimeter();
	return per;
}

void Triangle::setCoord(double tempx, double tempy, int i)
{
	x[i] = tempx;
	y[i] = tempy;
}

void Triangle::length()
{
	int k = 0;
	for (int i = 0; i < 2; i++)
		for (int j = i + 1; j < 3; j++)
		{
			dl[k] = 0;
			dl[k] = sqrt(pow((x[j] - x[i]), 2) + pow((y[j] - y[i]), 2));
			k++;
		}
}

void Triangle::perimeter()
{
	per = 0;
	length();
	for (int i = 0; i < 3; i++)
	{
		per += dl[i];
	}
}
