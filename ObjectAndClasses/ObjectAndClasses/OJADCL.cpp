#include<iostream>
#include<string>
using namespace std;

class Dog
{
public:

	Dog();

	string Name;
	int Age;
	float Health;

	void Bark();

};

int main()
{
	Dog dog;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;
	
	dog.Name = "Sam";
	dog.Age = 14;
	dog.Health = 43.5;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	system("pause");
}

Dog::Dog()
{
	Bark();
	Name = "Default Name";
	Age = 10;
	Health = 100;
}

void Dog::Bark()
{
	
	cout << "Woof" << endl;
	
}