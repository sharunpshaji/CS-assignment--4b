#include <iostream>
using namespace std;

void print(int y, int n) {
	if(y == n){
		cout<<y;
	}
	else{
		cout<<y<<endl;
		print(y+1, n);
	}
	
}
int main() {
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	print(1, n);
	cout << endl;
	
	return 0;
}
