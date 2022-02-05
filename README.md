# Sum-of-sum-divisors
My approach to Sum of sum divisors problem using C++
You can find this problem at Project Euler.net following this link https://projecteuler.net/problem=439.
Let d(k) be the sum of all divisors of k.
We define the function S(N) = Σ (i=1 ,N) Σ(j=1,N) d(i*j). 

.
For example, S(3) = d(1) + d(2) + d(3) + d(2) + d(4) + d(6) + d(3) + d(6) + d(9) = 59.

I will leave also the code file.

Here is the code to copy & paste :

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
