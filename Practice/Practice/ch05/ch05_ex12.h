#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

namespace ch05_ex12
{
	void findPairOccurence()
	{
		std::string s = "ab ab ababaqweerty absg";
		//int count = std::count(s.begin(), s.end(), "ab");
	}

	void findPairOccurenceCstyle()
	{
		const char* s = "ab ab ababaqweerty absg";
		char searcheStr[] = "ab";
		int searcedLen = strlen(searcheStr);
		const char* iter = strstr(s, "ab");
		int count = 0;
		if (!searcedLen)
			return;
		while (iter = strstr(iter, "ab"))
		{
			++count;
			//++iter;
			iter+=searcedLen;
		}
		std::cout << "Numer:" << count << std::endl;
	}
}