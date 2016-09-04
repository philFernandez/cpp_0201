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

	// package will hold number enterd by user in menu
	int package;
	// variables for holding values used for calculating total bill
	double hours;
	double base;
	double additionalRate;

	//prompt user for package choice
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

	// Checks that option entered by user is within valid range
	// If it is not the program exits after informing the user
	if (package < PACKAGE_A_CHOICE || package > PACKAGE_C_CHOICE)
	{
		cout << "The valid choices are 1 through 4.\n";
		cout << "Run the program again and select one of those.\n";
		exit(0);
	}

	// Get number of hours used
	cout << "Enter the amount of hours used: ";

	cin >> hours;

	// Check that hours are within valid range
	// If they are not the program exits after informing the user
	if (hours <= 0 || hours > 744)
	{
		cout << "You have entered an invalid number of hours.\n";
		exit(0);
	}

	// Assign price for package A to base
	// Subtract 10 hours from hours input by user 
	// The difference after subtraction is the number 
	// of hours to be billed for additionally 
	// Assign addtional rate for package A to additionalRate
	if (package == PACKAGE_A_CHOICE)
	{
		base = PACKAGE_A_BASE;
		hours -= PACKAGE_A_HOURS;
		additionalRate = PACKAGE_A_ADD;
	}

	// Assign price for package B to base
	// Subtract 20 hours from hours input by user 
	// The difference after subtraction is the number 
	// of hours to be billed for additionally 
	// Assign addtional rate for package B to additionalRate
	else if (package == PACKAGE_B_CHOICE)
	{
		base = PACKAGE_B_BASE;
		hours -= PACKAGE_B_HOURS;
		additionalRate = PACKAGE_B_ADD;
	}

	// The additional rate for package C is currenty set 
	// at 0 via a global constant. The same logic is used 
	// here as above so that if in the future there were 
	// any change in the billing price all that would 
	// need to be changed is the global constants.

	// Assign price for package C to base
	// Subtract 0 hours from hours input by user 
	// The difference after subtraction is the number 
	// of hours to be billed for additionally 
	// Assign addtional rate for package C to additionalRate
	else if (package == PACKAGE_C_CHOICE)
	{
		base = PACKAGE_C_BASE;
		hours -= PACKAGE_C_HOURS;
		additionalRate = PACKAGE_C_ADD;		
	}

	// This is where the calculations are done for all
	// three rate plans. All of the variables needed 
	// have had the proper assignments via the descision 
	// structure above

	// if hours are less than or equal to zero after the above subtraction
	// of alloted hours this means that the user stayed under the alloted hours
	if (hours <= 0) 
	{
		// if no overage occured the base price is charged
		cout << "Your bill is " << base << endl; 
	}

	else
	{
		// each hour over the alloted hours is multiplied by the coinciding additional rate and added to the base price
		cout << "Your bill is " << base + hours * additionalRate << endl; 
	}


	return 0;
}