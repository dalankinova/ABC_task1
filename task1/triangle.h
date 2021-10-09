#ifndef __triangle__
#define __triangle__

#include <fstream>
#include "point.h"
#include "color.h"
using std::ifstream;
using std::ofstream;
//Структура треугольника.
struct triangle
{
	Point a;//Угол 1.
	Point b;
	Point c;
	Color cl;
};
//Прочтение данных.
void ReadInFile(triangle& , ifstream& );
void WriteToFile(triangle&, ofstream&);
void ReadRand(triangle&);
double Perimeter(triangle&);
#endif // !__


