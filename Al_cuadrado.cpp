#include <iostream>
using namespace std;

void nums();
void al_cuadrado(float num1, float num2);
float x,y;

int main(){
	nums();
	al_cuadrado(x,y);
	return 0;
}

void nums(){
	cout<<"\nIngrese el numero: ";
	cin>>x;
	cout<<"\nIngrese su potencia: ";
	cin>>y;
}

void al_cuadrado(float num1, float num2){
	float num3=1.0;
	for(int i=0;i<num2;i++){
		num3=num1*num3;
	}
	cout<<"\nLa multiplicaion es: \n";
	cout<<num3;
}

