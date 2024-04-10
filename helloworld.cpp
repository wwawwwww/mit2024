#include <iostream>

using namespace std;
int fib(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	if (n > 2){
		return fib(n - 1) +fib(n - 2);
	}
}
int main(){
	cout << "Hello world" << endl;
	int n;
	cout << "Enter N of Fib num: ";
	cin >> n	 
	cout << endl << fib(n) << endl;
	return 0;
}
