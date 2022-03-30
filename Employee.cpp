#include "pch.h"
#include <iostream>
#include "Employee.h"
#include <fstream>


Employee::Employee(int employeeCodeNumber, std::string employeeName, std::string hireDate,
	std::string dsignation, std::string gender)
{
	memployeeCodeNumber = 0;
	mEmployeeName = "";
	mDsignation = "";
	mgender = "";

}

Employee::~Employee()
{
}

Employee::Employee()
{

}
void Employee::Print()
{
	std::cout << "employeeCodeNumber  EmployeeName  HireDay/HireMonth/HireYear  Dsignation  gender" << std::endl;
	std::cout << getEmployeeCodeNumber() << "               " << getEmployeeName() << "               " << getDay() << "/" << getMonth() << "/" << getYear() << "              " << getDsignation() << "               " << getGender() << std::endl;
	

}