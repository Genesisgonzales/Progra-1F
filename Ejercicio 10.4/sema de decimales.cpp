#include <iostream>
using namespace std;
float sn(const string& mensaje){
	float n;
	cout<<"Ingrese primer numero";
	cin>>n;
	return n;
}
	float n1, n2, n3;
	int main(int argc, char *argv[]) {
		cout<<"Ingrese primer numero"<<endl;
		cin>>n1;
		cout<<"Ingrese segundo numero"<<endl;
		cin>>n2;
		cout<<"Ingrese tercer numero"<<endl;
		cin>>n3;
		float s=(n1+n2+n3);
		cout<<"La suma total de los numero es de "<<s<<endl;
		return 0;
	}
	
	
