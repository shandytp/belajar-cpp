#include <iostream>

using namespace std;

int main(){
	// increment dan decrement
	// ada dua, preincrement dan post increment
	
	int a = 5;
	int b = 5;

	// post increment
	cout << a << endl;
	cout << a++ << endl; // print dulu baru tambah
	cout << a << endl << endl;

	// pre increment
	cout << b << endl;
	cout << ++b << endl;
	cout << b << endl;

	return 0;
}
