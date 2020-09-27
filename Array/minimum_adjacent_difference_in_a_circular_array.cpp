int minAdjDiff(int a[], int n){    
    
    if(n<2){
        return -1;
    }
    
    int res=abs(a[1]-a[0]);
     for (int i = 2; i < n; i++) 
     {
        res = min(res, abs(a[i] - a[i - 1]));   
     }
       
  
    
    res = min(res, abs(a[n - 1] - a[0])); 
    return res;
    
}
