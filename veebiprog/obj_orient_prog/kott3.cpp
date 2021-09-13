#include <iostream>
#include <map>
using namespace std;
int n, m;
int *hinnad;
map<string, int> asukohad;
string *artiklid, toode, *kingid;

int summa(){
	int s=0;
	for(int i=0; i<m; i++){
	s+=hinnad[asukohad[kingid[i]]]};
	}
	return s;
}

void vahetaHinnad(int a, int b){
	int abi= hinnad[a];
	hinnad[a]=hinnad[b];
	hinnad[b]=abi;
}

int vahetustegaSumma(){
	for(int i=0, i<n-1; i++){
		for(int j=i+1; j<n; j++){
			vahetaHinnad(i, j);
			int uusSumma=summa();
			if(uusSumma<s){s=uusSumma;}
			vahetaHinnad(i,j);
		}
	}
}

int main() {
	cin >> n;
	hinnad=new int[n];
	artiklid=new string[n];
	for(int i=0; i<n; i++){
		cin >> artiklid[i];
		cin >> hinnad [i];
		asukohad[artiklid[i]]=i;
	}
	cin >> m;
	kingid=new string[m];
	for(int i=0; i<m; i++) {
		cin >> kingid[i];
	}
	cout << "loetud" << endl;
	cout << summa() << endl;
}
