#include<iostream>
#include<string>
using namespace std;
//Setter and Getter 被称之为封装
class Creature
{
public:
	Creature();

	void SetName(string name);
	string GetName();

	float GetHealth();
	void takeDamage(float Damage);

private:
	float health;
	string Name;

protected:
	int NumberOfLines;

};

class Goblin:public Creature
{
public:
	Goblin();
	int GetNumberOfLimes();
};

int main()
{
	Creature Igor;
	Igor.SetName("Igor");

	cout << "Name: " << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;
	Igor.takeDamage(40);


	Goblin Gobby;
	cout << Gobby.GetName()<< endl;
	cout << Gobby.GetNumberOfLimes() << endl;

	system("pause");
}

Creature::Creature()
{
	health = 100.f;
	cout << "A Creature has been created\n";
}

void Creature::SetName(string name)
{
	Name = name;
	
}

float Creature::GetHealth()
{
	return health;
}

string Creature::GetName()
{
	
	return Name;
}

void Creature::takeDamage(float Damage)
{
	float total ;
	total = health - Damage;

	if (total<=0.f)
	{
		cout << GetName() << "has Died\n";

	}
	else
	{
		health -= Damage;
	}
	cout << "Health: " << health << endl;
}
Goblin::Goblin()
{
	NumberOfLines = 5;
	SetName("Gobby");
}

int Goblin::GetNumberOfLimes()
{
	return NumberOfLines;
}