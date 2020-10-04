#include <iostream>
#include <string>
#include<cstring>
#include <algorithm>

int main(){


	std::string s = "Hello World!";
	char cstr[s.size() + 1];
	strcpy(cstr, s.c_str());	// or pass &s[0]
	std::cout << cstr << '\n';
	
	std::string s1 = "Hello World!";
	char cstr1[s1.size() + 1];
	s1.copy(cstr1, s1.size() + 1);
	cstr[s1.size()] = '\0';
	std::cout << cstr1 << '\n';
	
	std::string s2 = "Hello World!";
	char cstr2[s2.size() + 1];
	std::copy(s2.begin(), s2.end(), cstr2);
	cstr[s2.size()] = '\0';
	std::cout << cstr2 << '\n';
	
	return 0;
	
}
