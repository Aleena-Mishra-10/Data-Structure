long long maximumSum(int arr[], int size)
{
   long long dp[size]={0};
   //dp[0]=arr[0];
   long long max_so_far = arr[0];
   int curr_max = 0;
   for(int i=0;i<size;i++){
       curr_max += arr[i];
       max_so_far = max(max_so_far,(long long)curr_max);
       if(curr_max<0){
           dp[i] = curr_max;
           curr_max=0;
       }
       else{
           dp[i]=curr_max;
       }
   }
   for(int i=0;i<size;i++){
       cout<<dp[i]<<" ";
   }
   cout<<endl;
   return max_so_far;
}
