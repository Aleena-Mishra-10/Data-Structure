int countWays(int n)
{
    long table[n+1]; 
    memset(table, 0, sizeof(table)); 
    table[0] = 1; 
    for (int i=1; i<n; i++){ 
        for (int j=i; j<=n; j++){ 
            table[j]= (long)((table[j-i]+table[j]))%1000000007; 
        }
    }
  
    //return (int)table[n]%1000000007;
    return (int)table[n];
}
