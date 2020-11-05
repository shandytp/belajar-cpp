#include <iostream>


using namespace std;

int main(){
	float value_1, value_2, result;
	char input_aritmatika;
	
	cout << "Selamat datang di Program Kalkulator \n \n";
	cout << "Masukkan angka pertama : ";
	cin >> value_1;
	cout << "Pilih Operator Matematika +, -, *, / : ";
	cin >> input_aritmatika;
	cout << "Masukkan angka kedua : ";
	cin >> value_2;

	switch(input_aritmatika){
		case '+':
			result = value_1 + value_2;
			cout << "Hasilnya adalah : " << result << endl;
			break;	
		case '-':
			result = value_1 - value_2;
			cout << "Hasilnya adalah : " << result << endl;
			break;
		case '*':
			result = value_1 * value_2;
			cout << "Hasilnya adalah : " << result << endl;
			break;
		case '/':
			result = value_1 / value_2;
			cout << "Hasilnya adalah : " << result << endl;
			break;
		default:
			cout << "Wrong House Fool!!\n";

	}

	return 0;
}
