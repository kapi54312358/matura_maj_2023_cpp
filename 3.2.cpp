#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int const n=10000;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/pi.txt");
	string cyfry[n], frag[n], dwa_cyfry[100];
	int i=0, j=0, l=0, max=-1, min=100;
	string pom="", max_frag="", min_frag="";
	ostringstream z;

	for(i=0; i<n; i++){
		we>>cyfry[i];
	}
	
	for(i=0; i<100; i++){
		if(i<10){
			z<<0<<i;
			pom=z.str();
			z<<" ";
			z.str("");
			dwa_cyfry[i]=pom;
		}
		else{
			z<<i;
			pom=z.str();
			z<<" ";
			z.str("");
			dwa_cyfry[i]=pom;
		}
	}
	
	for(i=0; i<n-1; i++) frag[i]=cyfry[i]+cyfry[i+1];
	
	for(i=0; i<100; i++){
		for(j=0; j<n-1; j++){
			if(dwa_cyfry[i]==frag[j]) l++;
		}
		if(l>max){
			max=l;
			max_frag=dwa_cyfry[i];	
		}
		if(l<min){
			min=l;
			min_frag=dwa_cyfry[i];	
		}
		l=0;
	}
	
	cout<<min_frag<<" "<<min<<endl;
	cout<<max_frag<<" "<<max;
	
	return 0;
}
