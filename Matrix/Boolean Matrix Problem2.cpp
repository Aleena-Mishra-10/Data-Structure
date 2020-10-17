#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c,i,j;
	    cin>>r>>c;
	    int a[r][c];
	    for(i=0;i<r;i++)
	    {
	        for(j=0;j<c;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    int b[r]={0};
	    int d[c]={0};
	    for(i=0;i<r;i++)
	    {
	        for(j=0;j<c;j++)
	        {
	            if(a[i][j]==1)
	              {
	                  b[i]=1;
	                  d[j]=1;
	              }
	        }
	    }
	    for(i=0;i<r;i++)
	    {
	        for(j=0;j<c;j++)
	        {
	            if(b[i]==1 || d[j]==1)
	               a[i][j]=1;
	        }
	    }
	    for(i=0;i<r;i++)
	    {
	        for(j=0;j<c;j++)
	        {
	            cout<<a[i][j]<<" ";
	        }
	        cout<<"\n";
	    }
	   // cout<<endl;
	}
	return 0;
}
