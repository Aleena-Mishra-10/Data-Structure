int equilibriumPoint(long long a[], int n) {
    
    long long sum=0;
    long long leftSum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        sum-=a[i];
        if(leftSum==sum){
            return i+1;
        }
        leftSum+=a[i];
    }
   return -1;
}
