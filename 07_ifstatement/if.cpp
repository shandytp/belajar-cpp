#include <iostream>

using namespace std;

int main(){
	int a;

	cout << "masukkan angka = ";
	cin >> a;

	// if statement
	if (a == 5)
	{
		cout << "Nilai ini adalah 5" << endl;
	}
	else if (a == 3)
	{
		cout << "Nilai ini adalah 3" << endl;
	}
	else if (a == 1)
	{
		cout << "Nilai ini adalah 1" << endl;
	}
	else
	{
		cout << "Congratulations, you play yourself" << endl;
	}

	cout << "End of Era"  << endl;
	cin.get();
	return 0;
}
