// ConsoleApplication14.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

void order_numbers(string *cadena, int size) {

    
    
    cout << "Cuantos valores quieres en el array?" << endl;
    cin >> size;

    cadena = new string[size];
    string *array = NULL;

    array = new string[size];

    for (int i = 0; i < size; i++) {

        cout << "valor numero " << i << endl;
        cin >> cadena[i];
    }

        for (int i = 0; i < size; i++) {

            if (*(cadena + i ) > *(cadena+i+1)) {

                *(array + i) = *(cadena + i + 1);
                *(cadena + i + 1) = *(cadena + i);
                array[i] = *(cadena + i);
            }
        }

        for (int i = 0; i < size; i++) {

            cout << *(cadena + i) << endl;
    }
    
        delete[] cadena;

}



int main()
{
    string *cadena = NULL;

    order_numbers(cadena,0);



}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
