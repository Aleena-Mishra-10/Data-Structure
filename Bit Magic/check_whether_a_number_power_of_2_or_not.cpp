#include <bits/stdc++.h> 
using namespace std; 
#define bool int  
  
/* Function to check if x is power of 2*/
bool isPowerOfTwo (int x)  
{  
	
   	return x&&(!(x&(x-1))); 
}  
  
/*Driver code*/
int main()  
{  
    isPowerOfTwo(31)? cout<<"Yes\n": cout<<"No\n";  
    isPowerOfTwo(64)? cout<<"Yes\n": cout<<"No\n";  
    return 0;  
}  
