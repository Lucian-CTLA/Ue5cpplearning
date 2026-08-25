#include<iostream>
using namespace std;

int b = 10;

int main() 
{
	{
		int a=12;
		cout << a << endl;
		{
			int c = 30;
			cout << c << endl;
		}
	}

	cout << b << endl;

	system("pause");
}