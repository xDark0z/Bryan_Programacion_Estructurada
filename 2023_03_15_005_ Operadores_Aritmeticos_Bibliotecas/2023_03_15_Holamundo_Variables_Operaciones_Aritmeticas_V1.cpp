// 2023_03_15_Holamundo_Variables_Operaciones_Aritmeticas_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Bryan Alejandro Alamillo Betancourt
//Hola mundo,Variables,Operaciones Aritmeticas 

#include <iostream>

int main()
{
    
    std::cout << "Hello World\n"; //Comunicarnos con el usuario
    // Con cout me comunico con el usuario
    // Con \n y con std ::end1 doy un salto de linea
    std::cout << "Hola \nChiquitines " << std::endl;
    std::cout << "Hello World!\n";
    
    // Tipos de variables bool,int,float,char,string
    //Sintaxys para nombrar variables
    //Tipo de variable - Nombre de la variable - Inicicializacion
    bool continuar = true;
    int vida = 100;
    float ataque = 18.5;
    char nombre[15] = " El Bryan" ;
    std::string namertag = "Dark0";
    std::cout << "Hola" << nombre << " Bienvenidos al mundo de " << namertag
    << std::endl;
    // Operadores Aritmeticos
    // + - * / ^2 raiz

    vida = vida - ataque;
    std::cout << "Tu vida restante es: " << vida << std::endl;
    float vida_aux = 0;
    vida_aux = vida - ataque;
    std::cout << "Tu vida_Aux restante es: " << vida_aux << std::endl;
        




}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
