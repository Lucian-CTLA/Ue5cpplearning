#include<iostream>
#include"Object.h"
#include"Actor.h"
#include"Pawn.h"
#include"InheritanceFunction.h"
using namespace std;

void InheritanceFunction();

int main()
{
	InheritanceFunction();

	system("pause");
}

void InheritanceFunction()
{
	Object* ptr_to_object = new Object;
	Actor* ptr_to_Actor = new Actor;
	Pawn* ptr_to_pawn = new Pawn;

	Object* ObjectArray[] = { ptr_to_object,ptr_to_Actor,ptr_to_pawn };

	for (int i = 0;i < 3;i++)
	{
		Object* obj = ObjectArray[i];

		Actor* act = dynamic_cast<Actor*>(obj);

		if (act)
		{
			act->ActorFunction();
		}

		Pawn* pwn = dynamic_cast<Pawn*>(obj);

		if (pwn)
		{
			pwn->PawnFunction();
		}
	}

	delete ptr_to_object;
	delete ptr_to_Actor;
	delete ptr_to_pawn;
}



