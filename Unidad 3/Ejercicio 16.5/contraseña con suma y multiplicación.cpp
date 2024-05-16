#include <iostream>
using namespace std;
int suma (int c, int t){
	int r;
	r = c+t;
	r = r*t;
	return r;
}
int main(int argc, char *argv[]) {
	int c;
	int t;
	cout<<"Ingrese contraseña: ";
	cin>>c;
	cout<<"Ingrese un numero entero: ";
	cin>>t;
	int r = suma (c, t);
	cout<<"El resultado es: "<<r<<endl;
	return 0;
}

