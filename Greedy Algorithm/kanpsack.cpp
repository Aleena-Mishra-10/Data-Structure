#include<bits/stdc++.h>
using namespace std;

struct item{
	int value,weight;
	item(int value, int weight) : value(value), weight(weight) 
    {}
};
double fractional_knapsack(int w,struct item a[],int n);
bool cmp(struct item a,struct item b);

bool cmp(struct item a,struct item b){
	
	double r1 = (double)a.value / a.weight; 
    double r2 = (double)b.value / b.weight; 
    return r1 > r2; 
}
double fractional_knapsack(int w,struct item a[],int n){
	sort(a,a+n,cmp);
	int curweight=0;
	float finalvalue=0.0;
	int i;
	for(i=0;i<n;i++){
		if(curweight+a[i].weight<=w){
			curweight+=a[i].weight;
			finalvalue+=a[i].value;
		}
		else{
			int remain = w - curweight;
			finalvalue += a[i].value * ((double) remain/a[i].weight);
			break;
		}
	}
	return finalvalue;
}

int main(){
	int w=15;
	item a[] = {{10,2}, {5,3}, {15,5},{7,7},{6,1},{18,4},{3,1}};
	int n=7;
	cout<<"Maximum profit: "<<fractional_knapsack(w, a, n); 
	return 0;
}
