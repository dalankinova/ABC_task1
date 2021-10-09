#ifndef __rectangle__
#define __rectangle__

#include <fstream>
#include "color.h"
#include "point.h"
using std::ifstream;
using std::ofstream;
struct rectangle
{
	Point a;//���������� ������ �������� ����.
	Point b;//���������� ������� ������� ����.
	Color cl;
};
//������ ������ �� �����.
void ReadInFile(rectangle&, ifstream&);
//��������.
void ReadRand(rectangle&);
//������ � ����.
void WriteToFile(rectangle&, ofstream&);
//��������.
double Perimeter(rectangle&);
#endif // !__rectangle__
