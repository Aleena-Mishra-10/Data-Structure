#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n) 
{ 
    int i; 
      
    // Initialize maximum element 
    int max1 = 0; 
  
    // Traverse array elements  
    // from second and compare 
    // every element with current max  
    for (i = 1; i < n; i++) 
        if (arr[i] > arr[max1]) 
            max1 = i; 
  
    return max1; 
} 
int smallest(int arr[], int n) 
{ 
    int i; 
      
    // Initialize maximum element 
    int min1 = 0; 
  
    // Traverse array elements  
    // from second and compare 
    // every element with current max  
    for (i = 1; i < n; i++) 
        if (arr[i] < arr[min1]) 
            min1 = i; 
  
    return min1; 
} 
int main() {
	int t;
	cin>>t;
	while(t--){
	          int n,m,s1=0,s2=0,c=0;
	          cin>>n>>m;
	          int a[n],b[m];
	          for(int i=0;i<n;i++){
	               cin>>a[i];
	               s1+=a[i];
	          }
	          for(int i=0;i<m;i++){
	               cin>>b[i];
	               s2+=b[i];
	          }
	          //sort(a,a+n);
	          //sort(b,b+m);
	          if(s1>s2){
	                    cout<<0<<endl;
	                    continue;
	          }
	          int k=min(n,m);
	          for(int i=0;i<k;i++){
	                    s1=accumulate(a,a+n,s1);
	                    s2=accumulate(b,b+m,s2);
	                    if(s2>=s1){
	                       int ma=smallest(a,n);
	                       int mb=largest(b,m);
	                       
	                       s1=0;
	                       s2=0;
	                       int temp=a[ma];
	                       a[ma]=b[mb];
	                       b[mb]=temp;
	                       
	                       
	                       c+=1;
	                    }
	                    else{
	                              break;
	                    }
	          }
	          s1=0,s2=0;
	          //cout<<"arrays are: \n";
	          for(int i=0;i<n;i++){
	               //cout<<a[i]<<endl;
	               s1+=a[i];
	          }
	          for(int i=0;i<m;i++){
	               //cout<<b[i]<<endl;
	              s2+=b[i];
	          }
	          //s1=accumulate(a,a+n,s1);
	          //s2=accumulate(b,b+m,s2);
	         // cout<<s1<<" "<<s2<<endl;
	          if(s2>=s1){
	                    cout<<-1<<endl;
	          }
	          else{
	                    cout<<c<<endl;
	          }
	}
	return 0;
}
