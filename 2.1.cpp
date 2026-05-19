#include <iostream>

using namespace std;

int blok(int n){
	int a=0, pot=1, bin=0, c=0, licznik=0;
	
	while(n>0){
		a=n%2;
		n/=2;
		bin+=a*pot;
		pot*=10;
	}
	
	while(bin>0){
		a=bin%10;
		bin/=10;
		c=bin%10;
		if(a!=c) licznik++; 
	}
	
	return licznik;
}

int main(int argc, char** argv) {
	int n=0, licznik=0;
	cin>>n;
	licznik=blok(n);	
	cout<<licznik;
	
	return 0;
}
