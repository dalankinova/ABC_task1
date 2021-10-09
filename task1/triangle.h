#ifndef __triangle__
#define __triangle__

#include <fstream>
#include "point.h"
#include "color.h"
using std::ifstream;
using std::ofstream;
//��������� ������������.
struct triangle
{
	Point a;//���� 1.
	Point b;
	Point c;
	Color cl;
};
//��������� ������.
void ReadInFile(triangle& , ifstream& );
void WriteToFile(triangle&, ofstream&);
void ReadRand(triangle&);
double Perimeter(triangle&);
#endif // !__


