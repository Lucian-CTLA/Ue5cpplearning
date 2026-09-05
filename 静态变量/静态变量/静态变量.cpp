#include<iostream>
using namespace std;

void AddToCount();

class Item
{
public:
	Item();
	~Item();
};

class Critter
{
public:
	Critter() {
		cout << "a Critter is created\n";
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
	for (int i = 0;i < 10;i++)
	{
		AddToCount();
	}

	{
		static Item item;
	}

	
	Critter::AnnounceCount();

	Critter* crit = new Critter;

	delete crit;
	Critter::AnnounceCount();

	system("pause");
}


void AddToCount()
{
	static int count = 0;
	count++;
	cout << count << endl;
}

Item::Item()
{
	cout << "Item is creat\n";
}

Item::~Item()
{
	cout << "Item is destory\n" << endl;
}