// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int checkAnswers(char[], char[], int);
char getInput();
int main()
{
	char answers[] = { 'B','A','B','C','D','A', 'D', 'B', 'B', 'C', 'C', 'C', 'A', 'D', 'B', 'A', 'C', 'D', 'B', 'D' };
	const int SIZE = 20;
	char testAnswers[SIZE];
	int correct = 0;
	int incorrect = 0;
	int corrections[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		testAnswers[i] = getInput();
	}
	for (int j = 0; j < SIZE; j++)
	{
		double check=checkAnswers(testAnswers,answers,j);
		if (check == 1)
		{
			correct++;
			corrections[j] = 99;
		}
		else if (check == 0)
		{
			incorrect++;
			corrections[j] = j+1;
		}
	}
	cout << "The number of correct answers is " << correct << endl;
	cout << "The number of incorrect answers is " << incorrect << endl;
	for(int k=0;k<SIZE;k++)
	{
		if (corrections[k]!= 99)
		{
			cout << corrections[k] << endl;
		}
	}
	
	cin.ignore();
	return 0;

}

int checkAnswers(char answers[],char testAnswers[],int index)
{
		char check1 = answers[index];
		char check2 = testAnswers[index];
		if (check1 == check2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}

char getInput()
{
	char answer;
	do {
		cout << "Please enter an answer, Mr. Bond." << endl;
		cin >> answer;
	} while (answer != 'A'&&answer != 'B'&&answer != 'C'&&answer != 'D');
	return answer;
}



