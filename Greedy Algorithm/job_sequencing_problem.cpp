#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct job{
	char id;
	int dead;
	int profit;
};

void findProfit(job a[],int n);
bool comparision(job a,job b);

bool comparision(job a,job b){
	return (a.profit>b.profit);
}
void findProfit(job a[],int n){
	int i,j,k;
	sort(a,a+n,comparision);
	int result[n];
	bool slot[n];
	for(k=0;k<n;k++){
		slot[k]=false;
	}
	for(i=0;i<n;i++){
		for(j=min(n,a[i].dead)-1;j>=0;j--){
			if(slot[j]==false){
				result[j]=i;
				slot[j]=true;
				break;
			}
		}
	}
	for(k=0;k<n;k++){
		if(slot[k]==true){
			cout<<a[result[k]].id<<" ";
		}
	}
}
int main(){
	
	job a[]={{'a',2,100},{'b',1,19},{'c',2,27},{'d',1,25},{'e',3,15}};
	int n = 5;
	cout<<"Following is maximum profit sequence of jobs\n";
	findProfit(a,n);
	return 0;
}
