#ifndef __point__
#define __point__

#include <cmath>
//Реализуем структуру для работы с точками на плоскости.
struct Point
{
	int x;//Абцисса.
	int y;//Ордината.
};
double Dist(Point&, Point&);//Евклидовое расстояние.
void RandP(Point&);//Случайная точка в пространстве.

#endif // !__point__
