#pragma once
#include "Employee.h"
#include <string>
#include "Schedule.h"
#include "BankAccount.h"

class Worker :
	public Employee
{
private:
	
	Schedule mWeekHour;
	int mPhoneNumber;
	double mHourAttended;
	std::string mGradePerformance;
	std::string mAddress;
	BankAccount mCreditCard;
	double mHourlyWage;
	double mPayment;

public:
	Worker();
	~Worker();

	Worker(std::string bankName, int phoneNumber, std::string gradePerformance, std::string address, int creditCard, double weekHour, double hourAttended, double hourlyWage);

	void setPhoneNumber(int phoneNumber) { mPhoneNumber = phoneNumber; }
	void setGradeProformance(std::string gradePerformance) { mGradePerformance = gradePerformance; }
	void setAddress(std::string address) { mAddress = address;}
	void setCreditCard(BankAccount creditCard) { mCreditCard = creditCard; }
	void setWeekHour(Schedule weekHour) { mWeekHour = weekHour; }
	void setHourAttended(double hourAttended) { mHourAttended = hourAttended; }
	void setHourlyWage(double hourlyWage) { mHourlyWage = hourlyWage; }
	void setPayment(double payment) { mPayment = payment; }

	int getPhoneNumber() { return mPhoneNumber; }
	std::string getGradeProformance() { return mGradePerformance; }
	std::string getAddress() { return mAddress; }
	BankAccount getCreditCard() { return mCreditCard; }
	Schedule getWeekHour() { return mWeekHour; }
	double getHourAttended() { return mHourAttended; }
	double getHourlyWage() { return mHourlyWage; }
	double getPayment() { return mPayment; }

	//funtions
	double hourCount(double hourAttended, double weekHour);
	void payment(double weekHour);
	void Print();
	
};

