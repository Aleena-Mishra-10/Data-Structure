int subArraySum(int arr[], int n, int sum)
{
    unordered_map <int,int> m;
    int pre_sum = 0;
    int count =0;
    for(int i=0; i<n; i++)
    {
    pre_sum += arr[i];
    if(pre_sum == sum) count++;
    if(m.find(pre_sum - sum) != m.end()) 
    {count += m.find(pre_sum - sum)->second;}
    m[pre_sum]++;
    
    }
return count;
}
