#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
void print(int ar[],int n){
	if(n==0){
		return;
	}
	else{
		
		print(ar,n-1);
		cout<<ar[n-1]<<" ";
	}
}
int main(){

	int ar[5] = {1,2,3,4,5};
	print(ar,5); 
return 0;
}