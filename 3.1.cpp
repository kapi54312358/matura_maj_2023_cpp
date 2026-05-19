#include <iostream>
#include <fstream>

using namespace std;

int const n=10000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/pi.txt");
	int cyfry[n];
	int i=0, licznik=0;

	for(i=0; i<n; i++){
		we>>cyfry[i];
	}

	for(i=0; i<n-1; i++){
		if(cyfry[i]==9){
			if(cyfry[i+1]>0) licznik++;
		}
	}

	cout<<licznik;

	return 0;
}
