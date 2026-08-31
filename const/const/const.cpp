//const
#include<iostream>
using namespace std;

void AddPrint(const int& a)
{
	cout << a << endl;
}

int main()
{
	int b;

	cin >> b;

	AddPrint(1);

	AddPrint(b);

	system("pause");
}