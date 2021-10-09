#include "figure.h"

figure* ReadInFile(ifstream& in)
{
	figure* f=NULL;
	int tip;// Тип из файла.
	in >> tip;
	switch (tip)
	{
    
	case 1:// Прямоугольник.
	{
		f = new figure;
		f->k = figure::R;
		ReadInFile(f->r, in);
		break;
	}
	case 2:// Треугольник.
	{
		f = new  figure;
		f->k = figure::T;
		ReadInFile(f->tr, in);
		break;
	}
	case 3:// Окружность.
	{
		f = new  figure;
		f->k = figure::C;
		ReadInFile(f->c, in);
		break;
	}
	default:
		break;
	}
	return f;
}
figure* ReadRand()
{
	figure* f = NULL;
	int tip = rand() % 3 + 1;
	switch (tip)
	{
	case 1:
	{
		f = new figure;
		f->k = figure::R;
		ReadRand(f->r);
		break;
	}
	case 2:
	{
		f = new figure;
		f->k = figure::T;
		ReadRand(f->tr);
		break;
	}
	case 3:
	{
		f = new figure;
		f->k = figure::C;
		ReadRand(f->c);
		break;
		break;
	}
	default:
		break;
	}
	return f;
}
// Запись в файл.
void WriteToFile(figure& f, ofstream& of)
{
	switch (f.k)
	{
	case figure::R:
	{
		WriteToFile(f.r, of);
		break;
	}
	case figure::T:
	{
		WriteToFile(f.tr, of);
		break;
	}
	case figure::C:
	{
		WriteToFile(f.c, of);
		break;
	}
	default:
		std::cerr << "Type not found!!\n";
		break;
	}
}
double Perimeter(figure& f)
{
	switch (f.k)
	{
	case figure::R:
	{
		return Perimeter(f.r);
	}
	case figure::T:
	{
		return Perimeter(f.tr);
	}
	case figure::C:
	{
		return Perimeter(f.c);
	}
	default:
	{
		std::cerr << "Not found!\n";
		return -1.0;
	}
	}
}
