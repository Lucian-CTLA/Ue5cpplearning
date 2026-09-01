#include<iostream>
#include<string>
using namespace std;

struct Container
{
	string Name;

	int X;
	int Y;
	int Z;
};

int main()
{
	Container container = { "Sam",12,23,34 };;
	Container* PtrToCont = &container;

	cout<< (*PtrToCont).Name << endl;
	cout << PtrToCont->Name << endl;
	cout << PtrToCont->X << endl;

	system("pause");
}