#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coord;
	coord.X=x;
	coord.Y=y; 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
	void imprimirHolaMundo(int x, int y){
		gotoxy(x, y);
		cout<<"Hola mundo "<<endl;
	}
	void imprimirNumeroEnCentro(int num){
		int screenWidth=80;
		int screenHeight=25;
		int x=(screenWidth/2)-4;
		int y=(screenHeight/2);
		gotoxy(x, y);
		cout<<num<<endl;
	}
	void imprimirPalabraAleatoria(string p){
		for (int i=0; i<10; i++){
			int x=rand()%80;
			int y=rand()%25;
			gotoxy(x, y);
			cout<<p<<endl;
		}
	}
	void imprimirCaracterRaro(int x, int y){
		gotoxy(x, y);
		cout<<"#"<<endl;
	}
	void saludarCompanero(){
		string nc;
		cout<<"Ingrese el nombre del companero"<<endl;
		cin>>nc;
		cout<<"Hola "<<nc<<endl;
	}
using namespace std;
int main(int argc, char *argv[]) {
	int opc;
	do{
		cout<<"~~Menu 1~~"<<endl;
		cout<<"Ingrese opcion valida"<<endl;
		cout<<"1. Ingreso de numeros y palabra"<<endl;
		cout<<"2. Coordenadas y saludo"<<endl;
		cout<<"0. Salir"<<endl;
		cin>>opc;
		switch (opc){
		case 1:
			int opc2;
			do{
				cout<<"~~Menu 2~~"<<endl;
				cout<<"Ingrese opcion valida"<<endl;
				cout<<"1. Ingreso de cordenadas para imprimir 'Hola mundo'"<<endl;
				cout<<"2. Imprimir un numero en el centro de la consola"<<endl;
				cout<<"3. Imprimir una palabra 10 veces en cualquier lugar de la consola"<<endl;
				cout<<"0. Salir del programa"<<endl;
				switch(opc2){
				case 1:{
					int x, y;
					cout<<"Ingrese las coordenadas 'x' e 'y' : "<<endl;
					cin>>x>>y;
					cin>>x>>y;
					imprimirHolaMundo(x, y);
					break;
				}
				case 2:
						int num;
						cout<<"Ingrese un numero: "<<endl;
						cin>>num;
						imprimirNumeroEnCentro(num);
						break;
				case 3:
					{
					string p;
					cout<<"Ingrese una palabra"<<endl;
					cin>>p;
					imprimirPalabraAleatoria(p);
					break;
				}
				case 4:
						cout<<"Saliendo del sistema..."<<endl;
						break;
				default:
					cout<<"Ingrese opcion valida"<<endl;
				}
			} while(opc2!=0);
			break;
		case 2:
				int opc3;
				do{
					cout<<"~~Menu 2~~"<<endl;
					cout<<"Ingrese opcion valida"<<endl;
					cout<<"1. Ingreso de cordenadas para imprimir 'Hola mundo'"<<endl;
					cout<<"2. Imprimir un numero en el centro de la consola"<<endl;
					cout<<"0. Salir del programa"<<endl;
					cin>>opc3;
					switch(opc3){
					case 1:
						imprimirCaracterRaro(30, 30);
						break;
					case 2:
						saludarCompanero();
						break;
					case 4:
						cout<<"Saliendo del programa..."<<endl;
						break;
					default:
						cout<<"Opcion no valida"<<endl;
					}
	} while(opc3!=0);
				break;
		}
	case 3:
				cout<<"Saliendo del programa..."<<endl;
				break;
	default:
		cout<<"Ingrese opcion valida"<<endl;
	} while(opc!=0);

	return 0;
	}

