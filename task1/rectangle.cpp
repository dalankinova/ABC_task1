#include "rectangle.h"
//������ ������ �� �����.
void ReadInFile(rectangle& r, ifstream& in)
{
	//��������� x y x1 y1 Color.
	char clr[14];
	in >> r.a.x >> r.a.y >> r.b.x >> r.b.y >> clr;
	r.cl = StrToColor(clr);
}
//��������.
void ReadRand(rectangle& r)
{
	
	int cnst = rand() % 100 + 1;
	RandP(r.a);
	r.b.x = r.a.x + cnst;
	r.b.y = r.a.y - cnst;
}
//������ � ����.
void WriteToFile(rectangle& r, ofstream& of)
{
	of << "(" << r.a.x << "," << r.a.y << "); (" << r.b.x << "," << r.b.y << "); " << ColorToStr(r.cl) << "\n";
}
//��������.
double Perimeter(rectangle& r)
{
	/*
	
	(x,y)_____________________(x1,y)
	|                        |
   a|                        |
	x,y1______________________(x1,y1)
	
	��������� � ��� ��� �������
	
	*/
	Point r_a;
	r_a.x = r.a.x;
	r_a.y = r.b.y;
	double _a = Dist(r.a, r_a);
	r_a.x = r.b.x;
	r_a.y = r.a.y;
	double _b = Dist(r.b, r_a);
	return 2 * (_a + _b);
}