// 2023_04_17 BuclesyLimites.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    //Ciclo infinito.... hasta que se deje de cumplir la condición...
    bool credito = true;
    int aux = 0;
    while (credito)//Evalua la veracidad de la sentencia
    {
        std::cout << "Tienes creditos sociales \n";
        aux = aux + 1;
        if (aux == 10)
        {
            credito = false;
        }
    }

    //Do While - se ejecuta forzozamente 1 vez.
    do {
        std::cout << "Quieres continuar?\n 0.- No 1.- si\n";
        std::cin >> credito;
    } while (credito);

    //For Ciclo de mayor control porque depende de 3 variables en su declaración
    // 1.- Variable de inicial; 2.- El Límite, 3.- Paso de variable aumento o disminución
    for (int i = 0; i < 10; i++) //i++ significa avance de 1 en 1. 
    {
        std::cout << "El contador va en: " << i << std::endl;
    }


}










