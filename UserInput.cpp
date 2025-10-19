#include <iostream>
#include <iomanip>
#include "UserInput.h"
#include <conio.h> // header to use "press any key" function

using namespace std;
// getters to pass input into banking files
double userInput::getInitialAmnt() {
	return initialAmnt;
}
double userInput::getMonthlyDeposit() {
	return monthlyDeposit;
}
double userInput::getAnnualInterest() {
	return annualInterest;
}
int userInput::getNumYears() {
	return numYears;
}

// print starting menu and intake input
void userInput::printMenu() {
	cout << "***********************************************************" << endl;
	cout << "********************** Data Input *************************" << endl;
	cout << "Initial Amount: $";
	cin >> initialAmnt;
	cout << "Annual Interest: ";
	cin >> annualInterest;
	cout << "Number of Years: ";
	cin >> numYears;
	cout << "Monthly deposits? $:";
	cin >> monthlyDeposit;
	cout << "Press any key to continue";
	_getch(); // this will move next after pressing any key
	system("cls"); // clear screen
}

bool userInput::willContinue() {
	char selection; // to use y or n as available selections for user
	// while loop
	while (true) { // boolean input option to give new numbers to program
		cout << "Would you like to start from the beginning? (Y/N)";
		cin >> selection;

		if (tolower(selection) == 'y') { //tolower allows uppercase or lowercase y or n
			system("cls");
			return true; // should restart program main loop
			break;
		}
		else if (tolower(selection) == 'n') {
			system("cls");
			return false; // should close program
			cout << "Goodbye." << endl;
			break;
		}
		else {
			system("cls");
			cout << "Please enter a valid option" << endl;
			continue;
		}
	}


}