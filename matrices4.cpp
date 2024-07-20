//matrices4.cpp
//Nina Estuco, William Andre
#include <iostream>
using namespace std;

int main(){
	int m, n;
	m=7, n=4;
	float A[m][n];
	cout<<"Ventas de las semanas de un mes"<<endl;
	cout<<"-----------------------------------------"<<endl;
	for(int i=0; i<n; i++){
		cout<<"\tSEM"<<i+1;
	}
	float S1=0, S2=0, S3=0, S4=0, ST=0;
	cout<<endl;
	for(int j=0; j<m; j++){
		switch(j){
			case 0:
				cout<<"(L)    ";
				break;
			case 1:
				cout<<"(M)    ";
				break;
			case 2:
				cout<<"(M)    ";
				break;
			case 3:
				cout<<"(J)    ";
				break;
			case 4:
				cout<<"(V)    ";
				break;
			case 5:
				cout<<"(S)    ";
				break;
			case 6:
				cout<<"(D)    ";
				break;
		}
		for(int k=0; k<n; k++){
			cin>>A[j][k];
			if(k==0){
				S1=S1+A[j][k];
			} else if(k==1){
				S2=S3+A[j][k];
			} else if(k==2){
				S3=S3+A[j][k];
			} else if(k==3){
				S4=S4+A[j][k];
			}
			ST=ST+A[j][k];
		}
	}
	cout<<"-----------------------------------------"<<endl;
	cout<<"      "<<S1<<"  "<<S2<<"  "<<S3<<"  "<<S4<<endl;
	cout<<"Venta total del mes: "<<ST<<endl;
	system("pause");
	return 0;
}
