#include "pch.h"
#include "BankAccount.h"
#include <iostream>
#include <fstream>

BankAccount::BankAccount()
{
}


BankAccount::~BankAccount()
{
}

void BankAccount::readcurrentBalance()
{
	std::fstream infile;
	infile.open("currentBalance.txt");

	if (!infile)
	{
		std::cout << "file doesn't exist!";
		exit(0);
	}

	double temp = 0;
	infile >> temp;
	setCurrentBalacnce(temp);
	infile.close();
}
void BankAccount::finalBalance(double currentBalance, double payment)
{
	double total = currentBalance + payment;
	setTotalBalance(total);
}