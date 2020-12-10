#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
typedef  long long int int1;
 
typedef struct{
 
int1 x1;
int1 x2;
}z; 
 
 
bool compare(z a,z b)
{
    return a.x1 < b.x1;
}
 
int main()
{
int t;cin>>t;
while(t--)
{
int1 m;int1 n;int1 i;
cin>>m>>n;
z a[m]; z temp_input[m];int1 q[n];int temp_size=0;
 
for(i=0;i<m;i++)
cin>>a[i].x1>>a[i].x2;
 
for(i=0;i<n;i++)
cin>>q[i];
 
stable_sort(a,a+m,compare);
 
temp_input[temp_size++] = a[0];
 
 
for(i=1;i<m;i++)
{
    if(a[i].x1 > temp_input[temp_size-1].x2)
    {
       temp_input[temp_size++] = a[i] ;
       
    }
    else 
    {
        temp_input[temp_size-1].x2 = max(temp_input[temp_size-1].x2,a[i].x2);
 
    }
 
}
 
int1 temp[temp_size];
temp[0] = temp_input[0].x2 - temp_input[0].x1 +1;
for(i=1;i<temp_size;i++)
{
    temp[i] = temp[i-1] + temp_input[i].x2 - temp_input[i].x1 +1;
}
 
for(i=0;i<n;i++)
{
    int1 temp1 = lower_bound(temp,temp+temp_size,q[i]) - temp;
    if(temp1 == temp_size)
      cout<<"-1"<<endl;
     else
     {
            q[i] = (!temp1)?q[i]:(q[i] - temp[temp1-1]);
            cout<<temp_input[temp1].x1 +q[i] -1<<endl;;
 
     }
 
}
 
}
 
return 0;
}
