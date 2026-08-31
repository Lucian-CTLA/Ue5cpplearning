#include<iostream>
using namespace std;

int main()
{
	int i = 14;
	int j = 13;
	int k = 12;

	if ((i == k || i == j)&&j==k)
	{
		cout << "i==k or i==j" << endl;
	}
	else if (i<k || i>j)
	{
		cout << "i<k or i>j" << endl;
	}
	system("pause");
}