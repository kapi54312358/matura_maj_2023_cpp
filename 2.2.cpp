#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=100;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/bin.txt");
	string liczby[n];
	string bin="";
	int i=0, j=0, blok=0, odpowiedz=0;
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}
	
	for(i=0; i<n; i++){
		blok=1;
		bin=liczby[i];
		for(j=1; j<liczby[i].size(); j++){
			if(bin[j]!=bin[j-1]) blok++;
		}
		if(blok<=2) odpowiedz++;
	}
	
	cout<<odpowiedz;
	
	return 0;
}
