#include<iostream>
using namespace std;

enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching
};

const float run_speed = 800.f;
const float walk_speed = 500.f;
const float Croch_speed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status,float &speed);

void SwitchOnInt(int i);

int main()
{
	float MovementSpeed;

	PlayerStatus status = PS_Walking;

	UpdateMovementSpeed(status, MovementSpeed);

	cout << "MovementSpeed is : " << MovementSpeed << endl;

	int n;
	cin >> n;
	SwitchOnInt(n);

	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status,float& speed)
{
	switch (P_Status)
	{
	case PS_Running:
		speed = run_speed;
		break;
	case PS_Walking:
		speed = walk_speed;
		break;
	case PS_Crouching:
		speed = Croch_speed;
		break;
	default:
		cout << "NO" << endl;
	}
}

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 1:
		cout << "Number is 1" << endl;
		break;
	case 2:
		cout << "Number is 2" << endl;
		break;
	default:
		cout << "Number is the other" << endl;

	}
}