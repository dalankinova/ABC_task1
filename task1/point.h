#ifndef __point__
#define __point__

#include <cmath>
//��������� ��������� ��� ������ � ������� �� ���������.
struct Point
{
	int x;//�������.
	int y;//��������.
};
double Dist(Point&, Point&);//���������� ����������.
void RandP(Point&);//��������� ����� � ������������.

#endif // !__point__
