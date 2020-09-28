#define MAX 1000000 
// L and R are input array
// maxx : maximum in R[]
// n: size of array
// arr[] : declared globally with size equal to maximum in L[] and R[]
#include <climits>
int maxOccured(int L[], int R[], int n, int maxx){

    int arr[MAX];
    memset(arr, 0, sizeof(arr)); 
    //int maxi=-1;
    for(int i=0;i<n;i++){
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int msum=arr[0],ind=0;
    for(int i=1;i<MAX;i++){
        arr[i]=arr[i-1]+arr[i];
        if(msum<arr[i]){
            msum=arr[i];
            ind=i;
        }
    }
    return ind;
    
}
