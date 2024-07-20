//matrices1.cpp
//Nina Estuco, William Andre
#include <iostream>
using namespace std;

int main(){
	int n, s;
	cout<<"MATRIZ DE ORDEN: "; cin>>n; cout<<endl;
	int A[n][n];
	s=0;
	cout<<"Matriz A"<<endl;
	for (int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin>>A[i][j];
			if(i<j){
				s=s+A[i][j];
			}
		}
	}
	cout<<"La sumatoria de elementos encima de diagonal principal es "<<s<<endl;
	system("pause");
	return 0;
}
