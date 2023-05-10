// 08_05_23_014_Contar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <Windows.h>



int main()
 {
    int SC = 0;
    int num10 = 10;
    int num = 1000;
    int salto = 0;
    


    std::cout << "Seleccione del 1 al 5 la modalidad de conteo de numeros 1.-While 2.-for 3.-do while 4.-Contador lento hasta 100\n5.- Contador de 10 en 10 a 100  \n";
    std::cin >> SC;

    switch (SC)
    {

    case 1:
        while (num >= 1)
        {
            std::cout << "El contador va en \n" << num << std::endl;;
            num = num - 1;

        }
        break;

    case 2:
        for (int i = 1000; i > 0; i--)
        {
            std::cout << "El contador va en: " << i << std::endl;
        }
        break;

    case 3:
        do {
            std::cout << "El contador va en: " << num << std::endl;
            num = num - 1;

        } while (num >= 1);
        break;
    case 4:
        for (int i = 1; i <= 100; i++)
        {
            std::cout << "El contador va en: " << i << std::endl;
            Sleep(1000);
        }
    case 5:
        for (int i = 0; i < 10; i++)
        { 
            for (int j = 0; j < 10; j++)
            {

                std::cout << salto << " ";
                salto = salto + 1;
            
            }
            std::cout << std::endl;

  }
 }
}