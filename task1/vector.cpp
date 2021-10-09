// Даланкинова Эмма Эдуардовна БПИ205
// Вариант 169
#include "vector.h"

void InitVector(Vector& v)// Инициализация контейнера.
{
	v.size = 0;

}
void FillInFile(Vector& v, ifstream& in)//С файла.
{
	while (!in.eof())
	{
		if ((v.figs[v.size] = ReadInFile(in)) != NULL)
		{
			v.size++;
		}
   }
}
void FillRandom(Vector& v, int sz)// Рандомное заполнение.
{
	for(int i=0;i<sz;i++)
	{
		// Ошибок не может быть, так как rand()%3+1 всегда в диапазоне [1..3].
		v.figs[v.size] = ReadRand();
		v.size++;
	}
}
void VecToFile(Vector& v, ofstream& of) // Запись в файл.
{
	of << v.size << " elements in Container contains\n";
	for (int i = 0; i < v.size; i++)
	{
		of << i + 1 << ": " << "Type Figure: ";
		switch (v.figs[i]->k)
		{
		case figure::R:
		{
			of << "Rectangle ";
			break;
		}
		case figure::T:
		{
			of << "Triangle ";
			break;
		}
		case figure::C:
		{
			of << "Circle ";
			break;
		}

		default:
			of << "Not found ";
			break;
		}
		WriteToFile(*(v.figs[i]), of);
	}
}
void SortSheyker(Vector& v) // Шейкерная сортировка.
{
	// Теперь напишем основной функционал.
	// Шейкерная сортировка.
	int l = 0, r = v.size - 1;
	bool fl = true;
	// Метод похож на пузырковую сортировку, только оптимизировано мы не будем смотреть до конца массива .

	while (l < r&& fl)
	{
		fl = false;
		for (int i = l; i < r; i++)
		{
			if (Perimeter(*(v.figs[i])) < Perimeter(*(v.figs[i + 1])))
			{
				figure* tm = v.figs[i];
				v.figs[i] = v.figs[i + 1];
				v.figs[i + 1] = tm;
				fl = true;
			}
		}
		r--;
		for (int i = r; i>l; i--)
		{
			if (Perimeter(*(v.figs[i-1])) < Perimeter(*(v.figs[i])))
			{
				figure* tm = v.figs[i-1];
				v.figs[i-1] = v.figs[i];
				v.figs[i] = tm;
				fl = true;
			}
		}
		l++;
	}
}
void Destroy(Vector& vc)
{
	for (int i = 0; i < vc.size; i++)
		delete vc.figs[i];
}