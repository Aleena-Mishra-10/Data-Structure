#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int r,int x);
int exponentialSearch(int arr[],int x,int n){
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(i<n && arr[i]<=x){
        i=i*2;
    }
    return binarysearch(arr,i/2,min(i,n),x);
}

int binarysearch(int arr[],int l,int r,int x){
    
    //int mid;
    if(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return binarysearch(arr,l,mid-1,x);
        }
        else{
              return binarysearch(arr,mid+1,r,x);
        }
       
    } 
        return -1;
}

int main(){
      
      int arr[] = {2, 3, 4, 10, 40}; 
      int n = sizeof(arr)/ sizeof(arr[0]); 
      int x = 3;
      int result = exponentialSearch(arr, x, n);
      (result==-1) ? cout<<"Element is not present in array" 
                   :  cout<<"Element is present at index "<<result;
      return 0;
}