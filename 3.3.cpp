#include <iostream>
#include <fstream>

using namespace std;

int const n=10000;

int rosnaco_malejacy(string c){
	int i=0;
	
	if(c[0]<c[1]){
		i++;
		while(c[i]<c[i+1] && i<4){
			i++;
		}
		while(c[i]>=c[i+1] && i<4 && c[i+1]!=c[i+2]){
			i++;
		}
	}
	
	if(c[4]>c[5]) i++;
	
	return i;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/pi.txt");
	string cyfry[n], ciag[n-5];
	int i=0, j=0, licznik=0, koniec=0;

	for(i=0; i<n; i++){
		we>>cyfry[i];
	}

	for(i=0; i<n-5; i++){
		for(j=i; j<i+6; j++){
			ciag[i]+=cyfry[j];
		}
		if(rosnaco_malejacy(ciag[i])==5) licznik++;
	}
	
	cout<<licznik;
	
	return 0;
}
