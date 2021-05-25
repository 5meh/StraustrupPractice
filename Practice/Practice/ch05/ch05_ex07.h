#pragma once
#include <iostream>

namespace ch05_ex07
{
	struct mounthInfo
	{
		const char* name;
		int numbOfDays;
	};

	void printStrucs()
	{
		std::cout << "printStrucs\n";
		mounthInfo mounths[] =
		{
			{"January",31},
			{"February",28},
			{"March",31},
			{"April",30},
			{"May",31},
			{"June",30},
			{"July",31},
			{"August",31},
			{"September",30},
			{"October",31},
			{"November",30},
			{"December",31}
		};
		for (int i = 0; i < 12; ++i)
			std::cout << mounths[i].name << " :" << mounths[i].numbOfDays << "\n";
	}

	void printMassives()
	{
		std::cout << "printMassives\n";
		const int days[12] = { 31 ,28,31,30,31,30,31,31,30,31,30,31 };
		const char* mounths[12] = 
		{ 
			"January",
			"February",
			"March",
			"April",
			"May",
			"June",
			"July",
			"August",
			"September",
			"October",
			"November",
			"December" 
		};

		for (int i = 0; i < 12; ++i)
		{
			std::cout << mounths[i] << ": " << days[i] << "\n";
		}
	}
}