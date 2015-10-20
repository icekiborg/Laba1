#include "Header.h"
#include "Triangle.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");
	Triangle *t[10];
	t[0] = new Triangle();
	t[1] = new Triangle(0, 0, 2, 3, 4, 0);
	t[2] = new Triangle(*t[1]);
	t[0]->setCoord(4, 0, 0);
	t[0]->setCoord(0, 0, 1);
	t[0]->setCoord(0, 4, 2);
	for (int i = 0; i < 3; i++)
	{
		t[i]->length();
	}
	cout << "Coord t2: " << endl;
	for (int i = 0; i < 3; i++)
	{ 
		cout << t[2]->getCoordX(i) << " ";
		cout << t[2]->getCoordY(i) << endl;
	}
	cout << "Length t0: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Length" << i << " " << t[0]->getDl(i) << endl;
	}
	cout << "Perimeter t0: " << t[0]->getPer() << endl;
	cout << "Perimeter t1: " << t[1]->getPer() << endl;
	cout << "Perimeter t2: " << t[2]->getPer() << endl;
	typeTriangle(t, 3);
	cout << "Max perimeter: " << maxPer(t, 3) << endl;
	cout << "Min perimeter: " << minPer(t, 3) << endl;
	system("pause");
	return 0;

}