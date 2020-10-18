class Solution{   
public:
    int getMinDiff(int a[], int n, int k) {
        if(n==1){
            return 0;
        }
        sort(a,a+n);
        int ans=a[n-1]-a[0];
        int s=a[0]+k;
        int b=a[n-1]-k;
        if(s>b){
            swap(s,b);
        }
        for(int i=1;i<n-1;i++){
            int sub=a[i]-k;
            int add=a[i]+k;
            if(sub>=s||add<=b){
                continue;
            }
            if(b-sub<=add-s){
                s=sub;
            }
            else{
                b=add;
            }
        }
        return min(ans,b-s);
        
    }
};
