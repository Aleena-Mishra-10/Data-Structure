class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        unordered_map<int,int> mp;
        int repeat=0;
        for(int i=0;i<n;i++)
        { 
                if(mp.count(arr[i])>0)
                {
                repeat=arr[i];
                }
                mp[arr[i]]++;
        }
        int missing=0;
        for(int i=0;i<n;i++)
        { 
            if(mp[i+1]==0)
            { 
                missing=i+1; 
            } 
        }
        int *a=new int[2];
        a[0]=repeat; 
        a[1]=missing; 
        return a;
    }
};
