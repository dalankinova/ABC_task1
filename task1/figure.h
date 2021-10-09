#ifndef __figure__
#define __figure__

#include "triangle.h"
#include "rectangle.h"
#include "circle.h"

struct figure
{
	enum type {R,T,C}; //��� ����� R-Rectangle T-Triangle C-circle.
	type k; //����.
	union 
	{
		rectangle r;
		triangle tr;
		circle c;
	};
};

figure* ReadInFile(ifstream&);
figure* ReadRand();
void WriteToFile(figure&, ofstream&);
double Perimeter(figure&);

#endif // !__figure__
