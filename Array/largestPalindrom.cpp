#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) 
{ 
    int divisor = 1; 
    int e=n,rev=0,d;
    while(n!=0){
    	d=n%10;
    	rev=rev*10+d;
    	n=n/10;
	}
	if(rev==e){
		return true; 
	}
	else{
		return false;
	}  
} 
int largestPalindrome(int a[],int n){
	
	sort(a,a+n);
	int i;
	for(i=n-1;i>=0;i--){
		 if (isPalindrome(a[i])) 
            return a[i];
	}
	return -1;
}
int main(){
	int n=4;
	int a[]={5,131,54545,1111118};
	cout << largestPalindrome(a, n); 
    return 0; 
}

