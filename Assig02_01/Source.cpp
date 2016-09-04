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
	double base;
	double additionalRate;
	cout << "Select a subscription package:\n";
	cout << "1. Package A\n";
	cout << "2. Package B\n";
	cout << "3. Package C\n";
	cout << "4. Quit\n";

	cin >> package;
	
	// Exits program if user chooses quit option (4)
	if (package == QUIT_CHOICE)
	{
		exit(0);
	}

	// Checks that option entered by user is in the correct range.
	// If it is not the program exits after informing the user.
	if (package < PACKAGE_A_CHOICE || package > PACKAGE_C_CHOICE)
	{
		cout << "The valid choices are 1 through 4.\n";
		cout << "Run the program again and select one of those.\n";
		exit(0);
	}

	// Get number of hours used
	cout << "Enter the amount of hours used: ";

	cin >> hours;
	if (hours <= 0 || hours > 744)
	{
		cout << "You have entered an invalid number of hours.\n";
		exit(0);
	}

	if (package == PACKAGE_A_CHOICE)
	{
		base = PACKAGE_A_BASE;
		hours -= PACKAGE_A_HOURS;
		additionalRate = PACKAGE_A_ADD;
	}
	else if (package == PACKAGE_B_CHOICE)
	{
		base = PACKAGE_B_BASE;
		hours -= PACKAGE_B_HOURS;
		additionalRate = PACKAGE_B_ADD;
	}
	else if (package == PACKAGE_C_CHOICE)
	{
		base = PACKAGE_C_BASE;
		hours -= PACKAGE_C_HOURS;
		additionalRate = PACKAGE_C_ADD;		
	}



	if (hours <= 0) 
	{
		cout << "Your bill is " << base << endl;
	}
	else
	{
		cout << "Your bill is " << base + hours * additionalRate << endl;
	}


	return 0;
}