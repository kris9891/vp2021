#include <iostream>
using namespace std;

int main () {
	//cout << "tere" << endl;
	//cout << "palun arv" << endl;
	int a;
	cin >> a;
	int pikkused[a];
	//cout << a*2 << endl;
	for(int i=0; i<a; i++) {
		//cout << "sisesta pikkus" << endl;
		cin >> pikkused[i];
		//cout << i*i << endl;
	}
	int suurim=pikkused[0];
	for(int i=0; i<a; i++) {
		if(pikkused[i]>suurim){pikkused[i];}
	}
	cout << suurim << endl;
	return 0;
}
