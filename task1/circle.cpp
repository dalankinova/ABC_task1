#include "circle.h"

void ReadInFile(circle& c, ifstream& in)
{
	// Структура x y r Color.
	char clr[14];
	in >> c.a.x >> c.a.y >>c.r>> clr;
	c.cl = StrToColor(clr);
}
void ReadRand(circle& c)
{
	// Мы можем выбрать в качестве центра любую точку.
	RandP(c.a);
	c.r = rand() % 55 + 1;// от 1 до 55.
}
void WriteToFile(circle& c, ofstream& of)
{
	of << "(" << c.a.x << "," << c.a.y << "); " << c.r << " ; " << ColorToStr(c.cl) << "\n";
}
double Perimeter(circle& c)
{
	//L=d*r=2*Pi*r
	return 2.0 * M_PI * c.r;
}