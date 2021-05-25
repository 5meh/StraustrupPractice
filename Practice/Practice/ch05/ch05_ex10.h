#pragma once
#include <iostream>

namespace ch05_ex10
{
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
	void printMassive(const char** massive)
	{
		do
		{
			std::cout << *massive;
		} while (*++massive);
	}
}