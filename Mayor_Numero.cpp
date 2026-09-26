//Encontrar el mayor numero

#include <iostream>
using namespace std;

int encontrarMax(int x,int y);

int main (){
	int n1,n2;
	cout<<"Dame dos numeros: \n";
	cin>>n1>>n2;
	if(n1==n2){
	cout<<"Ambos numeros son iguales.";
	}else{
	cout<<"\nEl mayor numero es: ";
	cout<<encontrarMax(n1,n2);	
	}
	return 0;
}

//Definicion de la funcion
int encontrarMax(int x,int y){
	int nmax;
	if(x>y){
		nmax=x;
	}else{
		nmax=y;
	}
	return nmax;
}

