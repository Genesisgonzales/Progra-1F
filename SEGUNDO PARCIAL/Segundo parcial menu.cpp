#include <iostream>
#include<windows.h>
#include <math.h>
using namespace std;
void CalculadoraHipotenusa(){
	float a, b, H, t;
	cout<<"Ingrese primer lado"<<endl;
	cin>>a;
	cout<<"Ingrese segundo lado"<<endl;
	cin>>b;
	H=(a*a)+(b*b);
	t=pow(H,2);
	cout<<"La hipotenusa es: "<<t<<endl;
}void CalculaAnguloFaltante(){
	float a, b, c,  t;
	cout<<"Ingrese primer angulo"<<endl;
	cin>>a;
	cout<<"Ingrese segundo angulo"<<endl;
	cin>>b;
	c=a+b;
	t=180-c;
	cout<<"El angulo faltante es: "<<t<<endl;
}void CalcularFactorialNumero(){
	int i;
	int fact=1;
	int n;
	int fac;
	cout<<"Ingrese numero: "<<endl;
	cin>>n;
	for(i=1; i<=n; i++){
		fact=fact*i;
	}
	cout<<"El total de la factorial es de: "<<fact<<endl;
}void PagodeCuenta(){
	float t;
	float p;
	int opc;
	cout<<"Ingrese cantidad gastada: "<<endl;
	cin>>t;
	cout<<"Ingrese el dinero dado: "<<endl;
	cin>>p;
	cout<<"Su pago es igual o mayor al total?"<<endl;
	cout<<"1. No"<<endl;
	cout<<"2. Si"<<endl;
	cin>>opc;
	do{
		switch(opc){
		case 1:
			cout<<"Debe de dar un pago mayor o igual al total"<<endl;
			break;
		case 2:
			cout<<"Su pago fue correcto. Feliz dia"<<endl;
			break;
		default:
			cout<<"No ingreso opcion valida"<<endl;
		}
	} while(opc!=1);
	
}
int main(int argc, char *argv[]) {
	int opc1;
	do{
		cout<<"~~Menu~~"<<endl;
		cout<<"1. Calculo de hipotenusa"<<endl;
		cout<<"2. Calculo de angulo faltante"<<endl;
		cout<<"3. Calculo factorial"<<endl;
		cout<<"4. Pago de cuenta"<<endl;
		cout<<"0. salir"<<endl;
		cin>>opc1;
		switch(opc1){
		case 1:
			CalculadoraHipotenusa();
			break;
		case 2:
			CalculaAnguloFaltante();
			break;
		case 3:
			CalcularFactorialNumero();
			break;
		case 4:
			PagodeCuenta();
			break;
		case 0:
			cout<<"SALIENDO DEL SISTEMA..."<<endl;
		default:
			cout<<"Ingrese opcion valida"<<endl;
		}
	} while(opc1!=0);
	return 0;
}

