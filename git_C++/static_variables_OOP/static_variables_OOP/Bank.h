#pragma once
//HEADER

//Functions declarations

#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>

using namespace std;

class Bank {

public:
	//default Constructor
	Bank();

	//overload Constructor
	Bank(string, int, double);

	//Destructor
	~Bank();

	//Accessor functions
	string getName() const;
	//string newname - returns name of user
	//@return string - name of user

	int getAccountNumber() const;
	//int newAccountNumber - returns account no of user
	//@return int - account no of user

	double getBalance() const;
	//double newBalance - returns balance of user
	//@return double - balance of user

	//Mutator functions
	void setName(string);
	//setName - sets name of user
	//@param string - name of user

	void setAccountNumber(int);
	//setAccountNumber - sets no of account
	//@param int - account no of user

	void setBalance(double);
	//setBalance - sets balance of user's acc
	//@param double - balance of user's acc

	void withdraw(double);

	void deposit(double);

	static void printBankInfo();

private:
	//member variables
	string name;
	int accountNumber;
	double balance;

	//static variables
	static int totalAccounts;
	static double bankBalance;

};

#endif