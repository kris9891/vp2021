#include <iostream>
using namespace std;

int main () {
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cout << 1*N << endl<< 2*(N-1) << endl<< 3*(N-2) << endl<< 4*(N-3) << endl<< 5*(N-4) << endl;
	}
}





#include <iostream>
#using namespace std;
#
#int main () {
#	//cout << "tere" << endl;
#	//cout << "palun arv" << endl;
#	int a;
#	cin >> a;
#	int pikkused[a];
#	//cout << a*2 << endl;
#	for(int i=0; i<a; i++) {
#		//cout << "sisesta pikkus" << endl;
#		cin >> pikkused[i];
#		//cout << i*i << endl;
#	}
#	int suurim=pikkused[0];
#	for(int i=0; i<a; i++) {
#		if(pikkused[i]>suurim){pikkused[i];}
#	}
#	cout << suurim << endl;
#	return 0;
#}
