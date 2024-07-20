//matrices2.cpp
//Nina Estuco, William Andre
#include <iostream>
using namespace std;

int main(){
	int n, s, k;
	cout<<"MATRIZ DE ORDEN: "; cin>>n; cout<<endl;
	int B[n][n];
	s=0;
	cout<<"Matriz B"<<endl;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>B[i][j];
		}
	}
	l=n;
	for(int k=1; k<=n; k++){
		s=s+B[k][l];
		k--;
	}
	cout<<"La sumatoria de elementos de la diagonal secundaria es "<<s<<endl;
	system("pause");
	return 0;
}
