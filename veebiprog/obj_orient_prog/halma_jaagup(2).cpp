#include <iostream>
using namespace std;
int N, M, tr, tv;
char **laud;
bool leitiHype=false;
int sammusuunad[4][2]={{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

void tryki(){
	for(int rida=0; rida<N; rida++){
		for(int veerg=0; veerg<M; veerg++){
			cout << laud[rida][veerg];
		}
		cout << endl;
	}	
}

bool kasSees(int r, int v){
	return (r>=0 && r<N && v>=0 && v<M);
}

bool kasVaba(int r, int v){
	return kasSees(r, v) && laud[r][v]=='.';
}

void hypped(int r, int v){
	for(int suund=0; suund<4; suund++){
		int ur=r+sammusuunad[suund][0];
		int uv=v+sammusuunad[suund][1];
		if(kasSees(ur, uv)){
			if(laud[ur][uv]=='*'){
				int ur2=r+sammusuunad[suund][0]*2;
				int uv2=v+sammusuunad[suund][1]*2;
				if(kasVaba(ur2, uv2)){
				    laud[ur2][uv2]='+';
					leitiHype=true;
				}
			}
		}
	}	
}

int main(void){
	cin >> N >> M;
	laud=new char*[N];
	for(int rida=0; rida<N; rida++){
		laud[rida]=new char[M];
		for(int veerg=0; veerg<M; veerg++){
			cin >> laud[rida][veerg];
			if(laud[rida][veerg]=='#'){tr=rida; tv=veerg;}
		}
	}
	hypped(tr, tv);
    while(leitiHype){
		leitiHype=false;
		for(int rida=0; rida<N; rida++){
			for(int veerg=0; veerg<M; veerg++){
			  if(laud[rida][veerg]=='+'){
				hypped(rida, veerg);
			  }
			}
		}
	}
	for(int suund=0; suund<4; suund++){
		int ur=tr+sammusuunad[suund][0];
		int uv=tv+sammusuunad[suund][1];
		if(kasVaba(ur, uv)){laud[ur][uv]='+';}
	}
	tryki();
}