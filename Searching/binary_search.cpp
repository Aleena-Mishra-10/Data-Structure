#include<bits/stdc++.h>
using namespace std;


int binarysearch(int arr[],int l,int r,int x){
    int mid;
    if(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            return binarysearch(arr,(mid+1),r,x);
        }
        else{
            return binarysearch(arr,l,(mid-1),x);
        }
    }
    return -1;
}
int main(){
    int arr[] = { 2, 3, 4, 10, 40 }; 
    int x = 10; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarysearch(arr, 0, n - 1, x); 
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result; 
    return 0;
}