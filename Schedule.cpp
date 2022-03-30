#include "pch.h"
#include "Schedule.h"
#include <iostream>
#include <stdlib.h>    
#include <time.h>

Schedule::Schedule()
{
}


Schedule::~Schedule()
{
}

void Schedule::RandTime()
{
	int hourShift = 0;
	while (true)
	{
		
		std::cout << "randomize a time period between 8 o'clock to 22 o'clock" << std::endl;
		std::cout << "enter number of hour in this shift" << std::endl;
		std::cin >> hourShift;
		if (hourShift > 14)
		{
			std::cout << "invalid input" << std::endl;
		}
		else
			break;
	}
	while (true)
	{
		srand(time(NULL));
		int a = rand() % 14 + 8;
		int b = rand() % 14 + 8;
		int timeDifference = a - b;
		if (timeDifference = hourShift)
		{
			std::cout << "the shift is between " << b << " o'clock and " << a << " o'clock." << std::endl;
			break;
			
		}
	}
	
}