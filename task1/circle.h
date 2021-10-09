#ifndef __circle__
#define __circle__
#define _USE_MATH_DEFINES
#include <fstream>
#include "color.h"
#include "point.h"
#include <math.h>
using std::ofstream;
using std::ifstream;
// Пишем структуру для Круга.
struct  circle
{
	Point a; // Центр.
	int r; // Радиус.
	Color cl;
};

void ReadInFile(circle&,ifstream &);
void ReadRand(circle&);
void WriteToFile(circle&,ofstream &);
double Perimeter(circle&);
#endif // !__circle__
