int first(int arr[], int low, int high, int x, int n){
    
    if(high>=low){
        int mid = low + (high - low)/2;
         if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
         if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
         return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}
void sortA1ByA2(int a1[], int n, int a2[], int m) 
{
    int temp[n],visited[n];
    for(int i=0;i<n;i++){
        temp[i]=a1[i];
        visited[i]=0;
    }
    sort(temp,temp+n);
    int ind=0;
    for(int i=0;i<m;i++){
        int f=first(temp,0,n-1,a2[i],n);
        if(f==-1){
            continue;
        }
        for(int j=f;(j<n && temp[j]==a2[i]);j++){
            a1[ind++]=temp[j];
            visited[j]=1;
        }
    }
    for (int i = 0; i < n; i++)
        if (visited[i] == 0)
            a1[ind++] = temp[i];
} 
