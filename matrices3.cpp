//matrices3.cpp
//Nina Estuco, William André
#include <iostream>
using namespace std;

int main(){
	int m, n;
	cout<<"Ingrese la cantidad de filas: ";
	cin>>m;
	n=m*3;
	cout<<"MATRIZ RECTANGULAR DE DIMENSION ";
	cout<<m<<"x"<<n<<endl;
	int C[m][n];

	cout<<"Matriz C"<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(i==0||j==0||i==m-1||j==n-1){
				C[i][j]=1;
			} else{
				C[i][j]=0;
			}
			cout<<C[i][j];
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
