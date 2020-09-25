#include <bits/stdc++.h> 
using namespace std; 

unsigned int countSetBits(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n != 0) {
	    count+=(n&1);
	    n = n/2;      
	} 
	return count; 
} 
int main() 
{ 
	int i = 9; 
	cout << countSetBits(i); 
	return 0; 
}
