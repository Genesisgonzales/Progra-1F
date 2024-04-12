#include <iostream>
using namespace std;
void opc1();
void opc2();
void opc3();

int main(int argc, char *argv[]) {
	char a, opc;
	do{
		cout<<"Menu"<<endl;
		cout<<"1. Imprimir numero"<<endl;
		cout<<"2. Imprimir palabra"<<endl;
		cout<<"3. Imprimir letra"<<endl;
		cout<<"4. Salir"<<endl;
		cin>>opc;
		switch(opc){
		case '1':
			opc1();
			break;
		case '2':
			opc2();
			break;
		case '3':
			opc3();
			break;
		case '4':
			cout<<"Saliendo del sistema..."<<endl;
			break;
		default:
			cout<<"Opcion no valida"<<endl;
		}
	} while(opc !='4');
	
	return 0;
}
void opc1(){
	int n;
	cout<<"Ingrese numero";
	cin>>n;
	cout<<"El numero que ingreso es: "<<n<<endl;
}void opc2(){
	string p;
	cout<<"Ingrese palabra"<<endl;
	cin>>p;
	cout<<"La palabara que ingreso es: "<<p<<endl;
}void opc3(){
	char l;
	cout<<"Ingrese letra: "<<endl;
	cin>>l;
	cout<<"La leta que ingreso es: "<<l<<endl;
}

