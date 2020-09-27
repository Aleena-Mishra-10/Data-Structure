vector<int> largestAndSecondLargest(int n, int a[]){
    int max1 = INT_MIN, max2= INT_MIN;
    vector<int> v;
    for(int i=0;i<n;i++){
        max1 = max(max1,a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]!=max1){
            max2 = max(max2,a[i]);
        }
    }
    
    if(max2==INT_MIN){
        max2=-1;
    }
    v.push_back(max1);
    v.push_back(max2);
    
    return v;
}
