/*Makenzie VanAusdall
CS210 - Project 2
October 1, 2025*/

#include "AirgeadBanking.h" // includes header with interest class definition
#include <stdlib.h> // to use screen clear function
#include "UserInput.h" // includes user input class

using namespace std;

bool contProgram = true; // boolean value to continue program

int main() { // main program loop
	while (contProgram == true) {
		userInput input1;
		input1.printMenu();
		Interest calc1; // to use user input values for calculations
		calc1.noDeposit(input1.getInitialAmnt(), input1.getAnnualInterest(), input1.getNumYears());
		calc1.withDeposit(input1.getInitialAmnt(), input1.getMonthlyDeposit(), input1.getAnnualInterest(), input1.getNumYears());
	

		contProgram = input1.willContinue(); // continues program if user chooses
	}
	system("cls"); // clear screen
	return 0;
}
