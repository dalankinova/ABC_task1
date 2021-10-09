#ifndef __vector__
#define __vector__

#include "figure.h"
struct Vector
{
	int size;
	figure* figs[6555];

};
void InitVector(Vector&);//������������� ����������.
void FillInFile(Vector&, ifstream&);//� �����.
void FillRandom(Vector&,int);//��������� ��������� .
void VecToFile(Vector&, ofstream&);//������ � ����.
void SortSheyker(Vector&);//��������� ����������.
void Destroy(Vector&);
#endif // !__vector__
