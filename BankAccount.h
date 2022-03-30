#pragma once
#include <string>
class BankAccount
{
private:
	std::string mBankName;
	double mCurrentBalance;
	double mTotalBalance;
public:
	BankAccount();
	~BankAccount();

	void setBankName(std::string bankName) { mBankName = bankName; }
	void setCurrentBalacnce(double currentBalance) { mCurrentBalance = currentBalance; }
	void setTotalBalance(double totalBalance) { mTotalBalance = totalBalance; }

	std::string getBankName() { return mBankName; }
	double getCurrentBalacne() { return mCurrentBalance; }
	double getTotalBalance() { return mTotalBalance; }

	void readcurrentBalance();
	void finalBalance(double currentBalance, double payment);
	
};

