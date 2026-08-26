#include<iostream>
using namespace std;

int main()
{
	double number_Pi = 3.1415926;
	double numberE = 2.718281828;

	int count = 0;

	bool Condition = true;

	do
	{
		cout << "the number_Pi is: " << number_Pi << endl;
		cout << "the numberE is: " << numberE << endl;
		cout << "Count: " << count << endl;
		cout << "Pi + E * count = " << number_Pi + numberE * count;

		count++;
		if (count <= 100) {

			Condition = true;
		}
		else
		{
			Condition = false;
		}
	} while (Condition);


	system("pause");
}