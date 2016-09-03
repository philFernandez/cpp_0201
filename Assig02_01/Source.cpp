/*
Philip Fernandez
Assignment 02 Question 01
9/3/16
*/

#include <iostream>

using namespace std;

int main()
{
	// Constants for menu choices
	const int PACKAGE_A_CHOICE = 1;
	const int PACKAGE_B_CHOICE = 2;
	const int PACKAGE_C_CHOICE = 3;
	const int QUIT_CHOICE = 4;

	// Constants for base package rates
	const double PACKAGE_A_BASE = 09.95;
	const double PACKAGE_B_BASE = 14.95;
	const double PACKAGE_C_BASE = 19.95;

	// Constants for hours of access
	const double PACKAGE_A_HOURS = 10.0;
	const double PACKAGE_B_HOURS = 20.0;
	const double PACKAGE_C_HOURS = 00.0;

	// Constants for additional hour rates
	const double PACKAGE_A_ADD = 2.0;
	const double PACKAGE_B_ADD = 1.0;
	const double PACKAGE_C_ADD = 0.0;

	// Constants for hours used
	const double MIN_HOURS = 000.0;
	const double MAX_HOURS = 744.0;




	int package;
	double hours;
	double bill;
	cout << "Select a subscription package:\n";
	cout << "1. Package A\n";
	cout << "2. Package B\n";
	cout << "3. Package C\n";
	cout << "4. Quit\n";

	cin >> package;

	cout << "Enter your usage in hours: ";
	cin >> hours;

	if (package == 1)
	{
		cout << "You have selected Package A.\n";
		if (hours > 10)
		{
			hours -= 10;
			bill = hours * 2 + 9.95;
			cout << "You went over the alloted 10 hours by ";
			cout << hours << " hours. \n";
			cout << "Your bill is " << bill << "\n";
		}
		else
		{
			cout << "Your usage is below the threshold of 10 hours per month.\n";
			cout << "Your bill is $9.95\n";
		}
	}

	if (package == 2)
	{
		cout << "You have selected Package B.\n";
		if (hours > 20)
		{
			hours -= 20;
			bill = hours * 1 + 14.95
		}
	}
	return 0;
}