#include<iostream>
#include<string>
using namespace std;

struct Character
{
	Character()
	{
		Name = "Default Name";
		Health = 100.f;
	}
	void PrintHealth();


	string Name;
	float Health;
};

int main()
{ 
	for (int i = 0;i < 10;i++)
	{
		Character* PtrToChar = new Character();//给Character里面的变量提供默认值（构造函数）
		

		cout << PtrToChar->Health << endl;
		cout << PtrToChar->Name << endl;

		PtrToChar->PrintHealth();

		delete PtrToChar;
	
	}




	system("pause");
}

void Character::PrintHealth()
{
	cout << "Health: " << Health << endl;
}