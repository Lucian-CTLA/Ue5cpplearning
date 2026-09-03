#include<iostream>
using namespace std;

void AddToCount();

class Item
{
public:
	Item()
	{
		cout << "An item has created" << endl;
	}
	~Item()
	{
		cout << "Item has been destroyed\n";
	}
};

class Critter
{
public:
	Critter()
	{
		cout << "A Critter is bron\n";
		++CritterCount;
	}

	static void AnnounceCount()
	{
		cout << CritterCount << endl;
	}

	static int CritterCount;
};

int Critter::CritterCount = 0;

int main()
{
	//1
	Critter::AnnounceCount();

	Critter* crit = new Critter;
	Critter::AnnounceCount();
	delete crit;

	//2
	{
		static Item item;
	}

	//3
	for (int i = 0;i < 10;i++)
	{
		AddToCount();
	}


	system("pause");
}
void AddToCount()
{
	static int count = 0;
	count++;
	cout << count << endl;
}