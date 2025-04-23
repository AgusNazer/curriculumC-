#include <iostream>
#include "menu.h"
#include "secciones/secciones.h"  // Importamos las funciones de las secciones

using namespace std;

int main() {
    int opcion;

    do {
        mostrarMenu();  // función que tenés en menu.cpp
        cin >> opcion;
        system("cls");

        switch (opcion) {
            case 1: mostrarSobreMi(); break;
            case 2: mostrarExperiencia(); break;
            case 3: mostrarEducacion(); break;
            case 4: mostrarHabilidades(); break;
            case 5: mostrarContacto(); break;

            case 0: cout << "Gracias por interactuar conmigo!" << endl; break;
            default: cout << "Opcion no valida\n"; break;
        }

        system("pause");  // Espera que el usuario presione una tecla
        system("cls");    // Limpia pantalla

    } while (opcion != 0);

    return 0;
}
