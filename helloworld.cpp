#include <iostream>

using namespace std;
void fib(int n) {
	int fnum = 0;
	int snum = 1;
	cout << fnum << " " << endl << snum << endl;
	for (int i = 2; i < n; i++){
		cout << fnum + snum << endl;
		int temp = fnum;
		fnum = snum;
		snum = temp + snum;

	}
}


int main(){
	cout << "Hello world" << endl;
	int n;
	cout << "Enter N of Fib num: ";
	cin >> n;	 
	fib(n);
	return 0;
}
