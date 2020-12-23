#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int arr[n+1],i;
	
	vector<int> cycle[n];
	
	bool visited[n+1];
	
	for(i=1;i<=n;i++)
	{
	    cin >> arr[i];
	    
	    visited[i] = false;
	}
	
	i=1; int count = 0,flag=0,c=0;
	
	while(count <= n)
	{
	    flag =0;
	    while(visited[i] == false)
	    {
	        visited[i] = true;
	        cycle[c].push_back(i);
	        count++;
	        i = arr[i];
	    }
	    
	    cycle[c].push_back(i);
	    c++;
	    for(i=1;i<=n;i++)
	    {
	        if(visited[i] == false)
	        {
	            flag = 1;
	            break;
	        }
	    }
	    if(!flag)
	    break;
	}
  cout << c << "\n";
	for(i=0;i<c;i++)
	{
	    for(auto it = cycle[i].begin(); it != cycle[i].end();it++)
	    {
	        cout << *it << " ";
	    }
	    
	    cout << "\n";
	}
	return 0;
}
