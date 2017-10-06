#include <iostream>
using namespace std;
 
int sum(int n,int m) {
	if(n==m){
		return m;
	}
	else{
		return n+sum(n-2,m);
	
	}
 
}
int main() {
	int n,m;
	cout<<"Enter the maximum number"<<endl;
	cin>>n;
	cout<<"Enter the minimum number"<<endl;
	cin>>m;
	cout<<sum(n,m);
 
 
	return 0;
}

