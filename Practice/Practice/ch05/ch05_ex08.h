#pragma once
#include <iostream>
#include <string>

namespace ch05_ex08
{
	void printMassive()
	{
		int massive[] = { 1, 2, 3, 4, 5, 6 };
		std::cout << massive[5];
		/*0054251C  mov         eax, 4
		00542521  imul        ecx, eax, 5
		00542524  mov         esi, esp
		00542526  mov         edx, dword ptr massive[ecx]
		0054252A  push        edx
		0054252B  mov         ecx, dword ptr[_imp_ ? cout@std@@3V ? $basic_ostream@DU ? $char_traits@D@std@@@1@A(054D0CCh)]
		00542531  call        dword ptr[__imp_std::basic_ostream<char, std::char_traits<char> >::operator<< (054D09Ch)]
		00542537  cmp         esi, esp
		00542539  call        __RTC_CheckEsp(054128Ah)*/

		std::cout << *(massive + 5);
		/*0054253E  mov         esi, esp
		00542540  mov         eax, dword ptr[ebp - 0Ch]
		00542543  push        eax
		00542544  mov         ecx, dword ptr[_imp_ ? cout@std@@3V ? $basic_ostream@DU ? $char_traits@D@std@@@1@A(054D0CCh)]
		0054254A  call        dword ptr[__imp_std::basic_ostream<char, std::char_traits<char> >::operator<< (054D09Ch)]
		00542550  cmp         esi, esp
		00542552  call        __RTC_CheckEsp(054128Ah)
		}*/
	}
}