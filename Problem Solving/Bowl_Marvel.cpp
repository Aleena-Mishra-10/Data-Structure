#include<iostream>
using namespace std;

int main(){
	int noOfBowls;
	cout<<"enter no of bowls\n";
	cin>>noOfBowls;
	cout<<"enter no of marbles in each bowls\n";
	int bowlNo,bowl[noOfBowls];
	for(bowlNo=1;bowlNo<=noOfBowls;bowlNo++){
		cin>>bowl[bowlNo];
	}
	int chk;
	for(chk=noOfBowls;chk>0;chk--){
		if(bowl[chk]<9){
			cout<<chk;
			break;
		}
	}
	return 0;
}
