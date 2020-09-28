void frequencycount(vector<int>& arr,int n)
{ 
    int i=1;
    while(i<=n){
        if(arr[i]<=0){
            i++;
            continue;
        }
        int eleInd = arr[i]-1;
        if(arr[eleInd]>0){
            arr[i] = arr[eleInd];
            arr[eleInd]=-1;
        }
        else{
            arr[eleInd]--;
            arr[i]=0;
            i++;
        }
        
    }
    printf("\nBelow are counts of all elements\n"); 
    for (int i=0; i<n; i++) 
        printf("%d -> %d\n", i+1, abs(arr[i]));
}
