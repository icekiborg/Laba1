#include "Header.h"
void typeTriangle(Triangle *t[], int n)
{
	int rs = 0;
	int rb = 0;
	int rg = 0;
	int pr = 0;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (t[i]->getDl(0) == t[i]->getDl(1) && t[i]->getDl(1) == t[i]->getDl(2))
		{
			rs++;
			k++;
		}
		if (t[i]->getDl(0) == t[i]->getDl(1) || t[i]->getDl(1) == t[i]->getDl(2) || t[i]->getDl(0) == t[i]->getDl(2))
		{
			rb++;
			k++;
		}
		if (sqrt(t[i]->getDl(0)*t[i]->getDl(0) + t[i]->getDl(1)*t[i]->getDl(1)) == t[i]->getDl(2) || sqrt(t[i]->getDl(0)*t[i]->getDl(0) + t[i]->getDl(2)*t[i]->getDl(2)) == t[i]->getDl(1) || sqrt(t[i]->getDl(2)*t[i]->getDl(2) + t[i]->getDl(1)*t[i]->getDl(1)) == t[i]->getDl(0))
		{
			rg++;
			k++;
		}
		if (k == 0) pr++;
		k = 0;
	}
	cout << "Кол. произвольных: " << pr << endl;
	cout << "Кол. прямоугольных: " << rg << endl;
	cout << "Кол. равнобедренных: " << rb << endl;
	cout << "Кол. равносторонних: " << rs << endl;
}
double maxPer(Triangle *t[], int n)
{
	double max = 0;
	max = t[0]->getPer();
	for (int i = 1; i < n; i++)
	{
		if (max < t[i]->getPer()) 
			max = t[i]->getPer();
	}
	return max;
}
double minPer(Triangle *t[], int n)
{
	double min = 0;
	min = t[0]->getPer();
	for (int i = 1; i < n; i++)
	{
		if (min > t[i]->getPer()) 
			min = t[i]->getPer();
	}
	return min;
}