//Constructing!!
#include<iostream>
#include<string>
using namespace std;

struct Cat
{
	Cat();

	int age;
	float Health;

	void Meow();
};

Cat::Cat()
{
	cout << "A new cat is born" << endl;

	age = 3;
	Health = 75;

	Meow();
}

void Cat::Meow()
{
	cout << "Meow" << endl;
	cout << "My age is: " << age << endl;
	cout << "My health is :" << Health << endl;
}

int main()
{
	Cat cat;

	cat.age = 5;
	cat.Health = 60;

	cat.Meow();

	system("pause");
}