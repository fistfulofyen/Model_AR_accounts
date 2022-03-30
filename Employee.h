#pragma once
#include <string>
class Employee
{
private:
	int memployeeCodeNumber;
	std::string mEmployeeName;
	int mHireDay;
	std::string mHireMonth;
	int mHireYear;
	std::string mDsignation;
	std::string mgender;

public:
	Employee(int employeeCodeNumber, std::string employeeName, std::string hireDate,
		std::string dsignation, std::string gender);
	~Employee();
	Employee();

	//setter
	void setEmployeeCodeNumber(int employeeCodeNumber) { memployeeCodeNumber = employeeCodeNumber; }
	void setEmployeeName(std::string employeeName) { mEmployeeName = employeeName; }
	void setDay(int day) { mHireDay = day; }
	void setMonth(std::string month) { mHireMonth = month; }
	void setYear(int year) { mHireYear = year; }
	void setDsignation(std::string dsignation) { mDsignation = dsignation; }
	void setGender(std::string gender) { mgender = gender; }


	//getter
	int getEmployeeCodeNumber() { return memployeeCodeNumber; }
	std::string getEmployeeName() { return mEmployeeName; }
	int getDay() { return mHireDay; }
	std::string getMonth() { return mHireMonth; }
	int getYear() { return mHireYear; }
	std::string getDsignation() { return mDsignation; }
	std::string getGender() { return mgender; }

	virtual void Print();
	friend class User;

};
