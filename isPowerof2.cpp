#include <iostream>
using namespace std;

bool isPwrof2(int n){
	return n && !(n & (n-1));
}
int main(){
	int n = 1025;
	cout<<"IS power of 2: "<<isPwrof2(n);
	return 0;
}