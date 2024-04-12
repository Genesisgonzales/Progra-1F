#include <iostream>
using namespace std;
void opc1() {
	cout << "Has seleccionado la opción 1 - Animo, tienes talento, solo falta encontrar en que." <<endl;
}void opc2() {
	cout << "Has seleccionado la opción 2 - Dios te bendiga" <<endl;
}void opc3() {
	cout << "Has seleccionado la opción 3 - Lee la biblia, pecador" <<endl;
}void opc4() {
	cout << "Has seleccionado la opción 4 - El frio es mejor que el calor" <<endl;
}void opc5() {
	cout << "Has seleccionado la opción 5 - Los hombres son mentirosos" <<endl;
}

int main() {
	int opc;
	
	do {
	cout << "Menú:" <<endl;
	cout << "1. Mensaje de animo" <<endl;
	cout << "2. Religioso" <<endl;
	cout << "3. Consejo" <<endl;
	cout << "4. Realidad" <<endl;
	cout << "5. otra realidad" <<endl;
	cout << "0. Salir" << std::endl;
	cout << "Seleccione una opción: ";
	cin >> opc;
		
		switch (opc) {
		case 1:
			opc1();
			break;
		case 2:
			opc2();
			break;
		case 3:
			opc3();
			break;
		case 4:
			opc4();
			break;
		case 5:
			opc5();
			break;
		case 0:
			cout << "Saliendo del programa..." <<endl;
			break;
		default:
			cout << "Opción no válida. Por favor, seleccione una opción válida." <<endl;
		}
		
		cout <<endl;
		
	} while (opc != 0);
	
	return 0;
}
