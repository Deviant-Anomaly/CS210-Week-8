/*Makenzie VanAusdall
CS210 - Project 2
October 1, 2025 */

#include <iostream> // allows input
#include <iomanip> // use setfill
#include "AirgeadBanking.h"


using namespace std;
// interest with no monthly deposits
void Interest::noDeposit(double init, double interest, int years) {

	// set variables
	initialAmnt = init;
	interestAmnt = interest;
	numYears = years;


	// prints display
	cout << "*--------------------------------------------------------------*" << endl;
	cout << "    Balance and Interest Without Additional Monthly Deposits    " << endl;
	cout << "----------------------------------------------------------------" << endl;
	cout << "Year:      End of Year Balance:     End of Year Earned Interest:" << endl;
	cout << "*--------------------------------------------------------------*" << endl;

	// calculation
	totalAmnt = initialAmnt;
	int i;
	for (i = 0; i < numYears; i++) {
		totalInterest = ((totalAmnt) * (interestAmnt / 100));
		totalAmnt = totalAmnt + totalInterest;

		// print and use setfill
		cout << setw(2) << (i + 1) << fixed << setprecision(2) << setw(20) << totalAmnt <<
			setw(20) << totalInterest << endl;
	}
	cout << endl;
}
// with monthly deposits
void Interest::withDeposit(double init, double deposit, double interest, int years) {
	// accept and set variables
	initialAmnt = init;
	depositAmnt = deposit;
	interestAmnt = interest;
	numYears = years;

	//print display
	cout << "*----------------------------------------------------------------* " << endl;
	cout << "     Balance and Interest With Addititonal Monthly Deposits        " << endl;
	cout << "------------------------------------------------------------------ " << endl;
	cout << "  Year:     End of Year Balance:    End of Year Earned Interest:   " << endl;
	cout << "*----------------------------------------------------------------* " << endl;

	//calculation

	totalAmnt = initialAmnt;
	int i;
	for (i = 0; i < numYears; i++) { // calculates for year

		endYearInterest = 0.0; // initialize to get starting value

		int j;
		for (j = 0; j < 12; j++) { // calculates per month

			double totalInterest = (((totalAmnt + depositAmnt) * (interestAmnt / 100) / 12));
			endYearInterest += totalInterest;
			totalAmnt = totalAmnt + depositAmnt + totalInterest;
		}
		cout << setw(2) << (i + 1) << fixed << setprecision(2) << setw(20) << totalAmnt <<
			setw(20) << endYearInterest << endl;
	}
}









