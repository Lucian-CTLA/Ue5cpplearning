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
	Character* Char = new Character;
	delete Char;


	system("pause");
}

Character::Character()
{
	cout << "a new Character is creater" << endl;

	CharacterAge = new int(1);
	CharacterHealth = new float(100.f);
}

Character::~Character()
{
	cout << "Character is destoryed\n";

	delete CharacterAge;
	delete CharacterHealth;
}