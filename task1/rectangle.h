#ifndef __rectangle__
#define __rectangle__

#include <fstream>
#include "color.h"
#include "point.h"
using std::ifstream;
using std::ofstream;
struct rectangle
{
	Point a;//Координаты левого верхнего угла.
	Point b;//Координаты правого нижнего угла.
	Color cl;
};
//Чтение данных из файла.
void ReadInFile(rectangle&, ifstream&);
//Рандомно.
void ReadRand(rectangle&);
//Запись в файл.
void WriteToFile(rectangle&, ofstream&);
//Периметр.
double Perimeter(rectangle&);
#endif // !__rectangle__
