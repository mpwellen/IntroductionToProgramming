// ConsoleApplication10.cpp : Defines the entry point for the console application.
// Name: Michael Wellen
// Date: 4/5/2018
// Description: This program calculates a senior citizen's property tax owed, taking into account exemptions, tax rates, and property value

#include "stdafx.h" //pre-configuration
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string name; //Name of citizen
	double value;//Value of house
	double rate;//interest rate
	const double PERCENT_ASSESSED = 0.60;//percent assessed. This is always the same for the county, so it's set as a constant
	const double EXEMPTION = 5000; //elder exemption. This is always the same for the county, so it's set as a constant
	double assessment;//initial assessment of property
	double annualTax;//annual tax 
	double quarterlyTax;//quarterly tax

	//collect input
	cout << "What is your name? ";
	getline(cin,name);
	cout << "Enter the actual value of the property: " ;
	cin  >> value;
	cout << "Enter the tax rate for each $100 of assessed value: " ;
	cin  >> rate;
	cout << "Property owner's name: Michael Wellen" << endl;
	
	//calculate assessment and tax amounts
	assessment = (value * PERCENT_ASSESSED) - EXEMPTION; //calculate assessment value
	annualTax = assessment * rate*0.01; //calculate tax
	quarterlyTax = annualTax / 4;//calculate quarterly tax rate

	//display results, properly formatted.
	cout <<setw(25)<<left <<"Assessment: "  <<"$"<<fixed << setprecision(2)<< setw(10)<<right<<assessment << endl;
	cout <<setw(25)<<left <<"Annual Property Tax: " <<"$"<< fixed << setprecision(2)<<setw(10) << right<<annualTax << endl;
	cout << setw(25)<<left<<"Quarterly Property Tax: "  <<"$"<<fixed << setprecision(2)<<setw(10)<<right<< quarterlyTax << endl;
	cin.ignore();	
    return 0;
}

