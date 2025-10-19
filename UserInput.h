/* Makenzie VanAusdall
CS 210 - Project 2
October 1, 2025 */
#pragma once
#include<iostream>
#define USERINPUT_H

class userInput {
public: // public functions
	void printMenu();
	double getInitialAmnt();
	double getMonthlyDeposit();
	double getAnnualInterest();
	int getNumYears();
	bool willContinue();

	// protected variables - initialized
protected:
	double initialAmnt = 0.0;
	double monthlyDeposit = 0.0;
	double annualInterest = 0.0;
	int numYears = 0;
};