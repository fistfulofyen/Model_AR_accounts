#pragma once
#include "Employee.h"
#include <string>
class Manager :
	public Employee
{
private:
	int mGrading;
public:
	Manager();
	~Manager();
	
	void setGrading(int grading) { mGrading = grading; }

	int getGrading() { return mGrading; }


	void employeeReadFromAFile();
};

