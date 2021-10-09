#include <iostream>
#include <stdlib.h>
#include "vector.h"
using namespace std;

int main(int argc,char**argv)
{
	// ������ �������� ��������� ������ ������� ����.
	// ������ �������� ����.

	srand(static_cast<unsigned int>(time(0)));// ������������ �� ������ �������� ������� �� 1990.
	//if (argc != 2)//���� ��� 2 ���������, ����� �����.
	//{
	//	cerr << "Error command line arguments\n";
	//	return 0;
	//}
	//
	ifstream in("tests/test05.txt");
	if (!in)// �������� ����, ���� ��� ������ ����� ��� �� ����� ���������, ����� ������.
	{
		cerr << "File not found!!\nPlease try again\n";
		return 0;
	}
	ofstream of("testanswer/testanswer05.txt");
	Vector vc;
	InitVector(vc); // ���������.
	FillInFile(vc, in); // ��������� ������ �� �����.
	//������ � �������� ����.
	of << "===================Before sorting=======================\n";
	VecToFile(vc, of);
	// ����������.
	SortSheyker(vc);
	// ��� ��� ������ � �������� ����.
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