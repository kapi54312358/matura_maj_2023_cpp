#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int const n=100;

int bintodec(string a){
	int i=0, w=0, p=1, dl=a.size();
	for(i=dl-1; i>=0; i--){
		if(a[i]=='1') w=w+p;
		p=p*2;
	}
	
	return w;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/bin.txt");
	string liczby[n];
	int i=0, najw=0, pom=0;
	string w;
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}

	for(i=0; i<n; i++){
		pom=bintodec(liczby[i]);
		if(pom>najw){
			w=liczby[i];
			najw=pom;
		}
	}
	
	cout<<w;
	
	return 0;
}
