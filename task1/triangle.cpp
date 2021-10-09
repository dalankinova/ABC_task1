#include "triangle.h"

// ��������� ������ �� �����.
void ReadInFile(triangle& tr, ifstream& in)
{
	char clr[14];
	in >> tr.a.x >> tr.a.y >> tr.b.x >> tr.b.y >> tr.c.x >> tr.c.y >> clr;
	tr.cl = StrToColor(clr);
}
void ReadRand(triangle& tr)
{
	// �� ������ ��� �� ����� ����� 3 ��������� ����� a+b<c &&b+c<a...������� ������������.
	RandP(tr.a);
	// �������� ����� ��������, ����� ������� �� ��� +const .
	int cst = rand() % 20 + 1;
	tr.b.x = tr.a.x + cst;
	tr.b.y = tr.a.y + cst;
	tr.c.x = tr.b.x + cst;
	tr.c.y = tr.b.y + cst;
	// ���� �������� ��������.
	tr.cl = RandColor();
}
void WriteToFile(triangle& tr, ofstream& of)
{
	of << "(" << tr.a.x << "," << tr.a.y << ");" << "(" << tr.b.x << ", " << tr.b.y << "); " << "(" << tr.c.x << ", " << tr.c.y << "); " << ColorToStr(tr.cl) << "\n";
}
double Perimeter(triangle& tr)
{
	double s_a = Dist(tr.a, tr.b);
	double s_b = Dist(tr.b, tr.c);
	double s_c = Dist(tr.a, tr.c);
	return s_a + s_b + s_c;
}