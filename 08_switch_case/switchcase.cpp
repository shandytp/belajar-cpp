#include <iostream>

using namespace std;

int main(){
	int a;

	cout << "Masukkan nilai : ";
	cin >> a;

	switch(a){
	// kasus dibawah kurang efektif kalo make switch, mending pake if saja
		case 1:
			cout << "a = 1" << endl;
			break;
		case 2:
			cout << "a = 2" << endl;
			break;
		case 3:
			cout << "a = 3" << endl;
			break;
		case 4:
			cout << "a = 4" << endl;
			break;
		case 5:
			cout << "a = 5" << endl;
			break;
		default:
			cout << "Number not in range" << endl;
			break;
	}
	
	cout << "End of era" << endl;

	return 0;
}
