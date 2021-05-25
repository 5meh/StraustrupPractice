#pragma once
#include <iostream>
#include <string>
namespace ch06_ex01
{
	void task()
	{
		std::string str="qwerty";
		int counter = 0;
		for(int i = 0; i < str.length(); ++i)
		{
			if (str[i] == '?')
				counter++;
		}
		counter = 0;
		int i = 0;
		while (i<str.length())
		{
			if (str[i] == '?')
				counter++;
			i++;
		}
		const char* p = str.c_str();
		counter = 0;
		while (*p!=0)
		{
			if (*p++ == '?')
				counter++;
		}
	}
}