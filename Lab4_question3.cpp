#include <iostream>
using namespace std;
 
void print(int n) {
	if(n==1){
		cout<<1;
	}
	else{
		cout<<n<<endl;
		print(n-2);
	}
 
}
int main() {
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	print(n);
 
 
	return 0;
}

