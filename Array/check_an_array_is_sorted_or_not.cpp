#include<iostream>
using namespace std;
bool check(int a[],int n); // O(n^2)
bool check_eff(int a[],int n); // O(n)
bool check_rec(int a[],int n);

bool check(int a[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				return false;
			}
		}
	}
	return true;
}
bool check_eff(int a[],int n){
	int i;
	for(i=1;i<n;i++){
		if(a[i]<a[i-1]){
			return false;
		}
	}
	return true;
}
bool check_rec(int a[],int n){
	if(n==1||n==0){
		return true;
	}
	if(a[n-1]<a[n-2]){
		return false;
	}
	return check_rec(a,n-1);
}
int main(){
	int n;
	bool f1,f2,f3;
	cout<<"Enter size of element\n";
	cin>>n;
	int a[n],i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	f1=check(a,n);
	if(f1==true){
		cout<<"Array is sorted\n";
	}
	else{
		cout<<"Array is not sorted\n";
	}
	f2=check_eff(a,n);
	if(f2==true){
		cout<<"Array is sorted\n";
	}
	else{
		cout<<"Array is not sorted\n";
	}
	f3=check_eff(a,n);
	if(f3==true){
		cout<<"Array is sorted\n";
	}
	else{
		cout<<"Array is not sorted\n";
	}
	return 0;
}
