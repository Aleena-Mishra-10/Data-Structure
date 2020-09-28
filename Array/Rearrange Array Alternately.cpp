void rearrange(long long *arr, int n) 
{   
    int maxind=n-1;
    int minind=0;
    int max_ele=arr[n-1]+1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=(arr[maxind]%max_ele)*max_ele;
            maxind--;
        }
        else{
            arr[i] += (arr[minind] % max_ele) * max_ele; 
            minind++; 
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] / max_ele;
    }
         
}
