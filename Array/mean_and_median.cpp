#include<cmath>
//User function Template for C++

int median(int A[],int N)
{
    int a;
    int res;
    sort(A,A+N);
    if(N%2==0){
       a=N/2;
       res = (A[a-1]+A[a])/2;
    }
    else{
        a=N/2;
        res = A[a];
    }
    return floor(res);
    
}

int mean(int A[],int N)
{
    int m=0;
   for(int i=0;i<N;i++){
       m+=A[i];
   }
   return m/N;
}
