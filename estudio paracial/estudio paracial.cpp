// estudio paracial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
// Juan José Quiñones 
//Codigo 2241500


#include <iostream>
using namespace std;
#include <cstdlib>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#include "Encuesta.h"
//este archivo sera el generador de numeros aleatorios //menu en cada turno
int main() {
    std::cout << "*******************************************\n";
    std::cout << "*                                         *\n";
    std::cout << "*                BIENVENIDO                *\n";
    std::cout << "*                                         *\n";
    std::cout << "*******************************************\n";
    int i=0;
    int eleccion=0;
    Encuesta miencuesta =Encuesta();

    cout <<"Bienvenido a la calificacion del servicio del restaurante universitario" << endl;
   

    cout << "elija que operacion desea realizar el dia de hoy: " << endl;
   
    do {
        cout << endl << endl;
        cout << "1. Hacer una encuesta " << endl;
        cout << "2. mostrar los datos recolectados" << endl;
        cout << "3. creditos" << endl;
        cout << "4. Cerrar programa" << endl;
        cin >> eleccion;
        switch (eleccion)
        {
        case 1:
            miencuesta.crearencuesta();
            break;
        case 2:
            miencuesta.mostar_datos();
            break;
        case 3:
            miencuesta.creditos();

            break;

       






        default:
            cout << "cerrando programa" << endl;
            break;
        }
    } while (eleccion != 4||eleccion>4);

    







    //generando base de datos
    //agrgar persona
    //abrir cuestionario 
    //regresar los datos a la consola 
    //fin de codigo
    }







// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
