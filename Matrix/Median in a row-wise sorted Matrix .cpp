class Solution{   
public:
    int median(vector<vector<int>> &a, int r, int c){
            int min1=INT_MAX,max1=INT_MIN,i;
            for(i=0;i<r;i++){
                min1=min(a[i][0],min1);
                max1=max(a[i][c-1],max1);
            }
            int d=(r*c+1)/2;
            while(min1<max1){
                int mid=min1+(max1-min1)/2;
                int place = 0;
                for(i=0;i<r;++i){
                    place+=upper_bound(&a[i][0],&a[i][c],mid) - &a[i][0];
                }
                if(place<d){
                    min1=mid+1;
                }
                else{
                    max1=mid;
                }
            }
            return min1;
    }
};
