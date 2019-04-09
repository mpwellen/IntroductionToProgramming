// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	long empid[7] = { 5654588,4512520,7812295,8774177,8427571,1385205,754880 };
	double hours[7];
	double payRate[7];
	double wage[7];
	for (int i = 0; i < 7; i++)
	{
		do {
			cout << "Please enter the hours for " << empid[i] << endl;
			cin>>hours[i];
		} while (hours[i] < 15 || isnan(hours[i]));
		do {
			cout << "Please enter the pay rate for " << empid[i] << endl;
			cin >> payRate[i];
		} while (isnan(payRate[i]));
		wage[i] = payRate[i] * hours[i];
	}
	for (int j = 0; j < 7; j++)
	{
		cout << empid[j] << "\'s wages are " <<fixed<<setprecision(2)<< wage[j] << endl;
	}


	return 0;

}

