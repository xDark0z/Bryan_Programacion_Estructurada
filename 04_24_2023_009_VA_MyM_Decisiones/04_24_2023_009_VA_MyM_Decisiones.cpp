// 04_24_2023_009_VA_MyM_Decisiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <cmath>
#include <iostream>

int main()
{
    int SC = 0;
    float V1 = 0;
    float V2 = 0;
    float Resultado;
    float VA = 0;
    std::cout << "Seleccione del 1 al 6 que operacion quiere realizar 1-Suma 2-Resta 3-Multiplicacion 4-Div 5-VA 6-Mayor y Menor que \n";
    std::cin >> SC;
    if (SC == 5)
    {
        std::cout << "Escriba el digito para el VA\n";
    }
    else
    {
        std::cout << "Escriba 2 digitos\n";
        std::cin >> V1;
        std::cin >> V2;
    }
       
    switch (SC)

    {
    case 1:
        Resultado = V1 + V2;
        std::cout << "El resultado es\n" << Resultado;
        break;
    case 2:
        Resultado = V1 - V2;
        std::cout << "El resultado es\n" << Resultado;
        break;
    case 3:
        Resultado = V1 * V2;
        std::cout << "El resultado es\n" << Resultado;
        break;
    case 4:
        Resultado = V1 / V2;
        std::cout << "El resultado es\n" << Resultado;
        break;
    case 5:
        std::cin >> VA;
        if (VA >= 0)
        {
            std::cout << "El resultado es\n" << VA;
        }
        else
        {
            VA = VA * -1;
            std::cout << "El resultado es\n" << VA;
        }
        break;
    case 6:
        if (V1 > V2)
        {
            std::cout << "El valor 1 es mayor\n";

        }
        else
        {
            std::cout << "El valor 2 fue mayor\n";
        }
        break;
        }





}


