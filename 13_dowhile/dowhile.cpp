#include <iostream>

using namespace std;

int main(){
	int a = 1;

	// kalau do while, atleast satu kali aksi dijalankan 
	
	do{
		cout << "Hore ";
		cout << a << endl;
		a++;
	} while(a <= 10);

	cout << "Finish desu" << endl;

	return 0;
}
