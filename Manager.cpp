#include "pch.h"
#include "Manager.h"
#include <fstream>
#include <iostream>

Manager::Manager()
{
	
}


Manager::~Manager()
{
}



void Manager::employeeReadFromAFile()
{
	int pickNum = 0;
	std::cout << "pick a employee number 1-10" << std::endl;
	std::cin >> pickNum;
	std::string temp = "";
	std::cout << "enter '+' or '-' as a grading change in number scale (1 - 5)" << std::endl;
	std::cin >> temp;


	std::fstream infile;
	infile.open("listOfEmployee.txt");

	if (!infile)
	{
		std::cout << "file doesn't exist!";
		exit(0);
	}

	for (int i = 1; i < 11; i++)
	{
		int employeeNumber = 0;
		std::string employeeName = "";
		int employeeGrade = 0;

		infile >> employeeNumber >> employeeName >> employeeGrade;
		if (employeeNumber == pickNum)
		{
			if (temp == "+")
			{
				std::cout << employeeName << "'s employee grading is increased to " << employeeGrade + 1 << std::endl;
			}
			else if (temp == "-")
			{
				std::cout << employeeName << "'s employee grading is decreased to " << employeeGrade - 1 << std::endl;
			}
		}
		
	}
}