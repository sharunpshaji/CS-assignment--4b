#include <iostream>
using namespace std;

int sum(int n,int s) {
	if(n/10==0) {
		return n+s;
	}
	else {
		s=s+n%10;
		sum(n/10,s);
	}
	
}
int main() {
	int n,s;
	cout<<"Enter the number"<<endl;
	cin>>n;
	cout<<sum(n,0);
	return 0;
}
