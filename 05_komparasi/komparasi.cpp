#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	int b = 2;

	bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

	// komparasi or relation expression
	
	// sebanding (==)
	hasil1 = (a == b);
	// tidak sebanding (!=)
	hasil2 = (a != b);
	// kurang dari (<)
	hasil3 = (a < b);
	// lebih dari (>)
	hasil4 = (a > b);
	// kurang dari sama dengan (<=)
	hasil5 = (a <= b);
	// lebih dari sama dengan (>=)
	hasil6 = (a >= b);
	cout << "\n";
	cout << "Hasil dari logika sebanding : " << hasil1 << endl;
	cout << "Hasil dari logika tidak sebanding : " << hasil2 << endl;
	cout << "Hasil dari logika kurang dari : " << hasil3 << endl;
	cout << "Hasil dari logika lebih dari : " <<  hasil4 << endl;
	cout << "Hasil dari logika kurang dari sama dengan : " <<  hasil5 << endl;
	cout << "Hasil dari logika lebih dari sama dengan : " <<  hasil6 << endl;

	cin.get();
	return 0;
}
