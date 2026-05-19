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

string dectobin(int a){
	int i=0;
	string w="";
	
	while(a>0){
		if(a%2==1) w='1'+w;
		else w='0'+w;
		a=a/2;
	}
	
	return w;
}

string XOR(string a, string b){
	int i=0;
	string w="";
	
	while(a.size()>b.size()){
		b='0'+b;
	}
	
	for(i=0; i<a.size(); i++){
		if(a[i]=='1' && b[i]=='1') w=w+'0';
		
		if(a[i]=='0' && b[i]=='1') w=w+'1';
		
		if(a[i]=='1' && b[i]=='0') w=w+'1';
		
		if(a[i]=='0' && b[i]=='0') w=w+'0';	
	}
	
	return w;
}

int main(int argc, char** argv) {
	ifstream we("C:/cpp/bin.txt");
	string liczby[n];
	int i=0, dec=0, pom=0;
	string p="", pdiv2="", xor_="";
	
	for(i=0; i<n; i++){
		we>>liczby[i];
	}

	for(i=0; i<n; i++){
		dec=bintodec(liczby[i]);
		p=dectobin(dec);
		pom=dec/2;
		pdiv2=dectobin(pom);
		xor_=XOR(p,pdiv2);
		cout<<xor_<<endl;
	}
	
	return 0;
}
