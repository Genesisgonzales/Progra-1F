#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int c=1;
	do{
		cout<<"Hola estudiantes";
		cout<<endl<<"Bienvenidos al ciclo";
		cout<<endl<<"Desea repetir? 1. Si, 2. No";
		cin>>c;
	} while(c==1);
	cout<<"Salimos del ciclo";
	return 0;
}

