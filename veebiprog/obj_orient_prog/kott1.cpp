#include <iostream>
#include <map>
using namespace std;
int n, m;
int *hinnad;
map<string, int> asukohad;
string *artiklid, toode;

int hind(string toode) {
	return hinnad[asukohad[toode]];
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
	for(int i=0; i<m; i++) {
		cin >> toode;
		cout << toode << " " << hind(toode) << endl;
	}
}
