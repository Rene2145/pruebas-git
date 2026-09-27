#include <iostream>
using namespace std;

void nums();
void mult(float num1, float num2);
float x,y;

int main(){
	nums();
	mult(x,y);
	return 0;
}

void nums(){
	cout<<"\nIngrese el primer numero: ";
	cin>>x;
	cout<<"\nIngrese el segundo numero: ";
	cin>>y;
}

void mult(float num1, float num2){
	float num3;
	num3=num1*num2;
	cout<<"\nLa multiplicaion es: \n";
	cout<<num3;
}

