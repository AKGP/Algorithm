#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long power(long long x,long long n){
	if(n==0){
		return 1;
	}
	long long temp = power(x,n/2)*power(x,n/2);
	if(n%2==0) return temp;
	return x*temp;
}
int main(){
	long long x,n;
	cin>>x>>n;
	cout<<power(x,n);
	return 0;
}