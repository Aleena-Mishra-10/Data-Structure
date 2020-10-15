int transitionPoint(int a[], int n) {
    int l=0;
   int  h=n-1;
    int mid;
    if(a[0]==1){
        return 0;
    }
    
    while(l<=h){
        mid = (l+h)/2;
        if(a[mid]==1&&a[mid-1]==0){
            return mid;
        }
        else if(a[mid]==1){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
