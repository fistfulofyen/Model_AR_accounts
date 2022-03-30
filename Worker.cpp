#include "pch.h"
#include "Worker.h"
#include <iostream>
#include "Schedule.h"
#include "BankAccount.h"

Worker::Worker()
{

}


Worker::~Worker()
{
}

Worker::Worker(std::string bankName, int phoneNumber, std::string gradePerformance, std::string address, int creditCard, double weekHour, double hourAttended, double hourlyWage)
{

}

double Worker::hourCount(double hourAttended, double weekHour)
{
	double moneyPenalty = 0;
	if (hourAttended < weekHour)
	{
		moneyPenalty = (weekHour - hourAttended) * 5;
	}
	return moneyPenalty;
}

void Worker::payment(double weekHour)
{
	double hourAttended = getHourAttended();
	double money = 0;
	
	money = hourAttended * getHourlyWage() - hourCount(hourAttended, weekHour);

	setPayment(money);
}

void Worker::Print() 
{
	std::cout << "The weekly payment is " << getPayment() << "  dollar." << std::endl;

}