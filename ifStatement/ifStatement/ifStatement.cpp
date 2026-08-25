#include<iostream>
using namespace std;
int main() {
	int a(13);
	int b = 13;
	if (b<a)
	{
		cout << "b is less than a" << endl;
	}
	else if (b == a)
	{
		cout << "b is eq to a" << endl;
	}
	else
	{
		cout << "b is not less than a" << endl;
	}

	system("pause");
}