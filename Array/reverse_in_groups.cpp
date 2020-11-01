#include<bits/stdc++.h>
using namespace std;

void reverse_grp(int a[],int n,int k)
{ 
    for (int i = 0; i < n; i += k) 
    { 
        int left = i; 
        int right = min(i + k - 1, n - 1); 
        while (left < right) {
        	 swap(a[left++], a[right--]); 
		}
  
    }
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	} 
}
int main(){
	int n=11;
	int k=3;
	int a[]={2, 6, 9, 7, 8, 3, 5, 4, 2, 9, 1};
    reverse_grp(a,n,k); 
    return 0; 
}
