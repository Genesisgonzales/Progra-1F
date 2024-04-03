#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1=0, opc;
	cout<<"Ingrese un numero ";
	cin>>opc;
	switch(opc){
	case 1:
	case 3:
		cout<<"Area comun"<<endl;
		break;
	case 5:
	case 7:
		cout<<"Area especifica"<<endl;
		break;
	default:
		cout<<"No nos encontramos en ese semestre"<<endl;
	}
	return 0;
}

