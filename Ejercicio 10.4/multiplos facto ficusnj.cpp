#include <iostream>
using namespace std;
void bm(int n){
	cout<<"Los multimplos de "<<n<<" son : ";
	for(int a=1; a<=10; a++){
		cout<<n *a<<" ";
	}
	cout<<endl;
}
	int fac(int n){
		if(n==0 || n==1){
			return 1;
		}else{
			return n*fac(n-1);
		}
	}
		void fb(int n){
			int fb1=0, fb2=1, fib;
			cout<<"La serie Fibonacci hasta el "<<n<<" es: ";
			cout<<fb1<<" "<<fb2<<" ";
			for(int a=0; fb1+fb2<=n; ++a){
				fib=fb1+fb2;
				cout<<fib<<" ";
				fb1=fb2;
				fb2=fb1;
			}
			cout<<endl;
		}
			int main(int argc, char *argv[]) {
				int n, opc;
				cout<<"Ingrese un numero";
				cin>>n;
				cout<<"Elija la accion que desee"<<endl;
				cout<<"1. Todos los multiplos del numero\n";
				cout<<"2. Calcular el factorial del numero\n";
				cout<<"3. Calcular la serie de fibonacci del numero\n";
				cin>>opc;
				switch(opc){
				case 1:
					bm(n);
					break;
				case 2:
					cout<<"El factorial de "<<n<<" es de : "<<fac(n)<<endl;
					break;
				case 3:
					fb(n);
					break;
					default :
						cout<<"Accion valida"<<endl;
				}
				return 0;
			}
			
			
