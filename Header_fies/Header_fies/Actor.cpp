#include<iostream>
#include"Actor.h"
using namespace std;

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called" << endl;
}
void Actor::ActorFunction()
{
	cout << "ActorFunction() called\n\n";
}