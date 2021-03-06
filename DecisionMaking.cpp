// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string choice; //select meal type
	double sandwiches = 0; //declare sandwich counter
	double salads = 0; //declare salad counter
	double platters = 0;//declare platter counter
	double total = 0;//total price variable
	double num = 0;//local variable source
	do
	{
		do //collect choice of meal
		{
			cout << "Would you like a sandwich, a platter, or a salad?" << endl;
			cin >> choice;
		} while (!choice.compare("sandwich") && !choice.compare("platter") && !choice.compare("salad"));//input validation

		if (choice.compare("sandwich")) // if choice is sandwich, add oto counter.
		{
			do
			{
				cout << "Please enter the number you would like" << endl;
				cin >> num;
			} while ((isnan(num)) && (num<0));//input validation
			sandwiches = sandwiches + num;
		}
		else if (choice.compare("platter")) //if choice is platter, add to counter
		{
			do
			{
				cout << "Please enter the number you would like" << endl;
				cin >> num;
			} while ((isnan(num)) && (num<0));//input validation
			platters += num;
		}
		else //if choice is salad, add to counter
		{
			do
			{
				cout << "Please enter the number you would like" << endl;
				cin >> num;
			} while ((isnan(num)) && (num < 0)); //input validation
			salads += num;
		}
		cout << "Would you like to order anything else?" << endl;
		choice = "";
		cin >> choice;//used to see if more food is necessary
	} while (!choice.compare("yes"));
	if (sandwiches > 3)//add cost to total price, with sales price
	{
		total = total + sandwiches * 2.75;
	}
	else //add cost to total price, with normal price.
	{
		total = total + sandwiches * 3.50;
	}
	if (platters > 3)//add cost to total price, with sales price
	{
		total = total + platters * 6.50;
	}
	else //add cost to total price, with normal price
	{
		total = total + platters * 5.75;
	}
	if (salads > 3) //add cost to total price, with sales price
	{
		total = total + salads * 3.75;
	}
	else //add cost to total price, with normal price
	{
		total = total + salads * 4.50;
	}
	cout << "Your total bill is " << fixed << setprecision(2) << total << "." << endl;
	cin.ignore();
	return 0;
}

