#include <iostream>
#include <stdlib.h>
#include "vector.h"
using namespace std;

int main(int argc,char**argv)
{
	// Первый параметр командной строки входной файл.
	// Второй выходной файл.

	srand(static_cast<unsigned int>(time(0)));// Рандомизатор на основе текушего времени от 1990.
	//if (argc != 2)//Если нет 2 аргумента, тогда выход.
	//{
	//	cerr << "Error command line arguments\n";
	//	return 0;
	//}
	//
	ifstream in("tests/test05.txt");
	if (!in)// Проверим файл, если нет такого файла или не могли прочитать, тогда ошибка.
	{
		cerr << "File not found!!\nPlease try again\n";
		return 0;
	}
	ofstream of("testanswer/testanswer05.txt");
	Vector vc;
	InitVector(vc); // Обнуление.
	FillInFile(vc, in); // Прочтение данных из файла.
	//Запись в выходной файл.
	of << "===================Before sorting=======================\n";
	VecToFile(vc, of);
	// Сортировка.
	SortSheyker(vc);
	// Еще раз запись в выходной файл.
	of << "\n==================After sorting===========================\n";
	VecToFile(vc, of);
	for (int i = 0; i < vc.size; i++)
	{
		cout << i + 1 << ": " << Perimeter(*(vc.figs[i]))<<endl;
	}
	in.close();
	of.close();
	Destroy(vc);
	return 0;
}