#include<iostream>
using namespace std;

enum PlayerStatus
{
	PS_Crouched,
	PS_Standing,
	PS_Walking,
	PS_Running
};

enum MovementStatus
{
	MS_Crouched,
	MS_Running
};

//simply a list of namesd integer constants

int main()
{
	PlayerStatus status;
	MovementStatus Mstatus ;
	status = PlayerStatus::PS_Running;

	Mstatus = MovementStatus::MS_Running;

	

	system("pause");
}