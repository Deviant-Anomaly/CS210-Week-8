/* Makenzie VanAusdall
CS 210 - Project 2
October 1, 2025 */

#pragma once // to only use header file once
#define AIRGEADBANKING_H


class Interest { // Name class and declare functions
public: // public functions
	void noDeposit(double init, double interest, int years);
	void withDeposit(double init, double deposit, double interest, int years);

	// declare variables
protected: // will allow access to derived classes
	double initialAmnt;
	double interestAmnt;
	double depositAmnt;
	double totalAmnt;
	int numYears;
	double totalInterest;
	double endYearInterest;
};
