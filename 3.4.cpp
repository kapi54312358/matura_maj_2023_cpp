#include <iostream>
#include <fstream>

using namespace std;

int const n=10000;

int rosnaco_malejacy(string c, int p){
	int i=0;
	
	while(c[p+i]<c[p+i+1]){
		i++;
	}
	
	if(i==0) return 0;
		
	while(c[p+i]>=c[p+i+1] && c[p+i+1]!=c[p+i+2]){
		i++;
	}
	
	return i;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/pi.txt");
	int i=0, j=0, najdl=0, pom=0, pocz=0;
	string ciag, cyfra;

	for(i=0; i<n; i++){
		we>>cyfra;
		ciag+=cyfra;
	}
	for(i=0; i<n; i++){
		pom=rosnaco_malejacy(ciag, i);
		if(pom>najdl){
			najdl=pom;
			pocz=i;
		}
	}
	
	cout<<pocz+1<<endl;
	for(i=pocz; i<pocz+1+najdl; i++){
		cout<<ciag[i];
	}
	
	return 0;
}
