#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <set>

namespace ch05_ex11
{
	void printWords()
	{
		std::string s;
		std::vector<std::string> words;
		std::set<std::string> sortedWords;	

		while (std::cin>>s)
		{
			if (s == "Quit")
				break;
			if (sortedWords.insert(s).second)
			{
				words.push_back(s);
			}
		}
		std::cout<<"In entered order:\n";
		for (std::vector<std::string>::const_iterator it=words.begin(); it != words.end(); ++it)
		{
			std::cout << *it << " \n";
		}
		std::cout << "In sorted order:\n";
		for (std::set<std::string>::const_iterator it=sortedWords.begin(); it != sortedWords.end(); ++it)
			std::cout << *it << " \n";
	}
}