long long findNthFibonacci(int n)
{
    vector<long long> f;
    
    f.push_back(0);
    f.push_back(1);
    
    for(int i=2;i<=n;i++)
    {
        long long sum=f[i-1] + f[i-2];
        f.push_back(sum);
    }
    
    //f.erase(f.begin());
    return f[n];

}
