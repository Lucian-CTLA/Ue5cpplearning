#include<iostream>
#include<string>
using namespace std;

int main()
{
	string MyString;

	MyString = "My Dog's name is: ";

	string first = "Stop ";

	string last = "Jones";

	MyString += first;
	MyString += last;

	cout << MyString << endl;


	system("pause");
}