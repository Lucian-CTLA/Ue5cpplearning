#include<iostream>
using namespace std;
 
class Animal
{
public:
	Animal();
	Animal(string name,int age,int num_lines);

	string Name;
	int Age;
	int NumberOfLines;

	void report();
};

int main()
{
	Animal animal;

	Animal animal_2("Cheetch", 7, 5);

	system("pause");
}

Animal::Animal()
{
	cout << "An animal is bron\n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLines = 4;

	report();
}

void Animal::report()
{
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age<< endl;
	cout << "NumberofLines: " << NumberOfLines << endl;
}

Animal::Animal(string name, int age, int num_lines):Name(name),Age(age),NumberOfLines(num_lines)
{
	report();
}