#include "point.h"
//Функция возвращает расстояние между двумя точками.
double Dist(Point& a, Point& b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
//Случайная Точка [-1000...1000].
void RandP(Point& a)
{
	a.x = rand() % 2001 - 1000;
	a.y = rand() % 2001 - 1000;
}