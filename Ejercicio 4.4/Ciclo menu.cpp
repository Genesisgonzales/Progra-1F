#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int m=1;
	do{
		cout<<"Hola, usuario"<<endl;
		cout<<"Ingreso a Menu"<<endl;
		cout<<"Desea salir del Menu? 1. No, 2. Si"<<endl;
		cin>>m;
	} while(m==1);
	cout<<"SALIO DEL MENU";
	return 0;
}

