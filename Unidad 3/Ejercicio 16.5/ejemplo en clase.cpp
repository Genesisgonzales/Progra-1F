#include <iostream>
#include <string>
using namespace std;
string cifrar(const string& cadena){
	string resultado = cadena;
	int longitud = resultado.length();
	for (int i=0; i<longitud; i++){
		char caracter = resultado[i];
		if(caracter=='d'){
			resultado[i]='*';
		}if(caracter=='m'){
			resultado[i]=')';
		}
	}
	return resultado;
}
int main(int argc, char *argv[]) {
	string frase, fraseCifrada;
	cout<<"Ingrese una frase para cifrarla";
	getline(cin, frase);
	fraseCifrada = cifrar(frase);
	cout<<"Frase cifrada: "<<fraseCifrada;
	return 0;
}

