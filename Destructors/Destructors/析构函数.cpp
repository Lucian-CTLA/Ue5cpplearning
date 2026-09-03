#include<iostream>
using namespace std;

class Character
{
public:
	Character();
	~Character();

	int* CharacterAge;
	float* CharacterHealth;
};

int main()
{
	Character* Char = new Character();
	delete Char;

	system("pause");
}
Character::Character()
{
	cout << "A new character is create\n";
	CharacterAge = new int(1);
	CharacterHealth = new float(100.f);
}
Character::~Character()
{
	cout << "Character destroy\n";
	delete CharacterAge;
	delete CharacterHealth;
}