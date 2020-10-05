#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergeSort(int a[],int lb,int ub);
void merge(int a[],int lb,int mid,int ub);

void mergeSort(int a[],int lb,int ub){
	if(lb<ub){
		int mid = (lb+ub)/2;
		mergeSort(a,lb,mid);
		mergeSort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m;  
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

int main(){
	int n,i;
	cout<<"Enter no of elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	mergeSort(a,0,n-1);
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
