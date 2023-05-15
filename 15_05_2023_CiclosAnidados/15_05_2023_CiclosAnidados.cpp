// 15_05_2023_CiclosAnidados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{


    for (int i = 0; i < 10; i++)//Conteo Externo
    {
        std::cout << i << " ";
        for (int j = 0; j < 10; j++)//Conteo Interno
       {
            std::cout << j << "";
        
       }
        std::cout << std::endl;
    }
    

}



