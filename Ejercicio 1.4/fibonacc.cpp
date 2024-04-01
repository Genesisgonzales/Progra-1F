#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n, p=0, e=1, s;
	cout<<"Ingrese un numero en serio de Fibonacci";
	cin>>n;
	cout<<"La serie de Fibonacci hasta "<<n<<"terminos:\n";
	for(int a=0; a<n; a++){
		if(a<=1){
			s=a;
		}else{
			s=p+e;
			p=e;
			e=s;
		}
		cout<<s<<" ";
	}
	return 0;
}

