#include<iostream>
using namespace std;

class Animal
{
public:
	Animal();
	Animal(string name, int age, int num_lines);

	string Name;
	int Age;
	int NumberOfLines;

	void report();
};

class Dog :public Animal
{
public:
	Dog();
	Dog(string name, int age, int num_lines);

	void speek();
};

class keji :public Dog
{

};

int main()
{
	Dog dog("Spot",4,5);

	keji keji;

	keji.speek();

	system("pause");
}

Animal::Animal()
{
	cout << "An animal is bron\n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLines = 4;

}

void Animal::report()

{
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberofLines: " << NumberOfLines << endl;
	cout << endl;
}

Animal::Animal(string name, int age, int num_lines)
	:Name(name), Age(age), NumberOfLines(num_lines)
{
	report();
}

Dog::Dog()
{
	cout << "A dog is born\n";
}
Dog::Dog(string name, int age, int num_lines):Animal(name, age, num_lines)
{

}

void Dog::speek()
{
	cout << "Woof!\n";
}