#include "pch.h"
#include "User.h"
#include <iostream>
#include "Employee.h"
#include "Worker.h"
#include "Manager.h"
#include "BankAccount.h"
#include "Schedule.h"
#include <map>
#include <algorithm>

User::User()
{
}


User::~User()
{
}

void User::userInterface()
{
	
	while (true)
	{
		int userInput = 0;
		std::cout << "...................................................................." << std::endl;
		std::cout << "1. Calculate employee payment." << std::endl;
		std::cout << "2. Change employee grading." << std::endl;
		std::cout << "3. Create random work schedule." << std::endl;
		std::cout << "4. Enter new employee infomation." << std::endl;
		std::cout << "5. exit."<<std::endl;
		std::cin >> userInput;

		if (userInput == 1)
		{
			double HourAttented = 0;
			double weekHour = 0;
			double hourlyWage = 0;
			std::cout << "Please enter HourAttented, weekHour and hourlyWage respectively" << std:: endl;
			std::cin >> HourAttented >> weekHour >> hourlyWage;
			Worker myWorker;
			myWorker.setHourlyWage(hourlyWage);
			myWorker.setHourAttended(HourAttented);
			myWorker.payment(weekHour);
			myWorker.Print();
			int YorN = 0;
			std::cout << "store the amount into an bank account ?" << std:: endl;
			std::cout << "1. Yes." << std::endl;
			std::cout << "2. No." << std::endl;
			std::cin >> YorN;
			if (YorN == 1)
			{
				BankAccount someBankAccount;
				someBankAccount.readcurrentBalance();
				double currentBalance = someBankAccount.getCurrentBalacne();
				double payment = myWorker.getPayment();
				someBankAccount.finalBalance(currentBalance, payment);
				std::cout << "the new total balance in the bank account is " << someBankAccount.getTotalBalance() << "dollar." << std::endl;
			}
		}
		if (userInput == 2)
		{
			Manager someManager;
			someManager.employeeReadFromAFile();
		}
		if (userInput == 3)
		{
			Schedule someSchedule;
			someSchedule.RandTime();
		}
		if (userInput == 4)
		{
			Employee* employee = new Employee();
			std::string input;
			double i_input;
			std::cout << "What is the employee's name? (no space)\n";
			std::cin >> input;
			employee->setEmployeeName(input);
			

			std::cout << "What is the employee's position? (no space)\n";
			std::cin >> input;
			employee->setDsignation(input);

			std::cout << "What is the employee's code number?\n";
			std::cin >> i_input;
			employee->setEmployeeCodeNumber(i_input);


			std::cout << "What is the employee's date hired?\n";


			std::cout << "Day: (integer)\n";
			std::cin >> i_input;
			employee->setDay(i_input);
			
			

			std::cout << "Month: (string)\n";
			std::cin >> input;
			employee->setMonth(input);
			

			std::cout << "Year: (integer)\n";
			std::cin >> i_input;
			employee->setYear(i_input);
			
			std::cout << "What is the employee's gender? (male or female)" << std::endl;
			std::cin >> input;
			employee->setGender(input);

			employee->Print();
		}
		if (userInput == 5)
		{
			break;
		}
	}
}