#include<iostream>
#include<string>
using namespace std;

void Print(string str);
void Print(int i);
void Print(string str1, string str2);
void Print(int i, string str);

int main()
{
	Print("My string one!", "My string two!");

	Print(3, "sud");

	system("pause");
}

void Print(string str)
{
	cout << str << endl;
}

void Print(int i)
{
	cout << i << endl;
}

void Print(string str1, string str2)
{
	cout << "str1: " << str1 << " str2: " << str2 << endl;
}

void Print(int i, string str)
{
	cout << "Integer value: " << i << " String : " << str << endl;
}