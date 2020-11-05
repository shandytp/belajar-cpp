#include <iostream>

using namespace std;

int main(){
	
	cout << "Loop 1 \n";
	
	for(int i = 1; i <= 10; i++){
		cout << "Ini adalah loop yang ke - " << i << endl;
	}
	cout << "\n Loop 2 \n";
	
	for(int i = 1; i <= 10; i += 2){
		cout << "Ini adalah loop yang ke - " << i << endl;
	}
	cout << "\n Loop 3 \n";
	
	for(int i = 1; i >= -10; i--){
		cout << "Ini adalah loop yang ke - " << i << endl;
	}

	cout << "\n Loop 4 \n";
	
	int total1 = 0;	
	for(int i = 1; i <= 10; i++){
		total1 += i;
		cout << i << " || " << total1 << endl;
	}

	cout << "\n Loop 5 \n";
	
	int total2 = 0;	
	for(int i = 1; i <= 10; total2 += i, i++){
		cout << i << " || " << total2 << endl;
	}


	cout << "Akhir dari program \n";

	return 0;
}
