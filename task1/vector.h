#ifndef __vector__
#define __vector__

#include "figure.h"
struct Vector
{
	int size;
	figure* figs[6555];

};
void InitVector(Vector&);//Инициализация контейнера.
void FillInFile(Vector&, ifstream&);//С файла.
void FillRandom(Vector&,int);//Рандомное заполение .
void VecToFile(Vector&, ofstream&);//Запись в файл.
void SortSheyker(Vector&);//Шейкерная сортировка.
void Destroy(Vector&);
#endif // !__vector__
