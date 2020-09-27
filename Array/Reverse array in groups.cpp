vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    
    int left,right;
    for(int i=0;i<n;i=i+k){
       left=i;
       right=min(i+k-1,n-1);
       while(left<right){
           swap(mv[left++],mv[right--]);
       }
    }
    return mv;
    
}
