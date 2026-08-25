#include<iostream>
using namespace std;

void welcome();

char getYesNo();

void printResponse(char responsePrint);

void askYesOrNoQuestion();

int main()
{
	//ask user to enter y or n and then return the response
	askYesOrNoQuestion();

	system("pause");
}

void welcome()
{
	//welcome user to the program
	cout << "welcome\n";
}

char getYesNo()
{
	//Ask the user yes or no 
	cout << "Please Ansure : y or n\n";

	//char varlable to store the response
	char response;

	//get input from the user via keyboard
	cin >> response;

	return response;

}

void printResponse(char responsePrint)
{
	//print the response to the screen
	cout << "You ansure was: " << responsePrint << endl;
}

void askYesOrNoQuestion()
{
	//Greet the user
	welcome();

	//creat char varlable and store the result from getYesNo()
	char answer = getYesNo();//getYesNo() get a y or n from the user

	//return the response back to the user on the screen
	printResponse(answer);

}