#include<stdio.h>
#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int d(int x){
	int sum=0;
	for(int h=1;h<x+1;h++){
		if ((x % h) ==0){
			sum+=h;
		}
		else{
			sum=sum;
		}
	}
	return sum;
}

int main(){
	int n ,s=0;
	cout<<" ENTER n \n";
	cin>>n;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			s=s+d(i*j);
		}
		
		
		
		
	}
	cout<<"sum ="<<s;
	return 0;
}
