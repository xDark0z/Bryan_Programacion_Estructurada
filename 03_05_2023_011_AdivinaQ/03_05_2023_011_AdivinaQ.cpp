// 03_05_2023_011_AdivinaQ.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>


int main()
{
    while (true)
    {

        bool aux = false;
        std::cout << "Bienvenido al adivina quien te tops" << std::endl;
        std::cout << "Tu personaje inmoviliza???\n ";
        std::cin >> aux;

        if (aux == true) // inmoviliza?
        {
            std::cout << "Tu personaje es hombre???\n ";
            std::cin >> aux;
            if (aux == true) // Es hombre?
            {
                std::cout << "Tu personaje parece piedra???\n ";
                std::cin >> aux;
                if (aux == true) // Es piedra?
                {
                    std::cout << " Tu personaje es.... Malphite\n";
                }
                else// No Es piedra
                {
                    std::cout << " Tu personaje es.... Sion\n";
                }
            }
            else //No Es hombre
            {
                std::cout << " Tu personaje es.... Fiora\n";
            }
        }
        else //No Inmoviliza
        {
            std::cout << "Tu personaje es hombre???\n ";
            std::cin >> aux;
            if (aux == true)// Es hombre?
            {
                std::cout << "Tu personaje tiene espada???\n ";
                std::cin >> aux;
                if (aux == true) // Tiene espada?
                {
                    std::cout << " Tu personaje es.... Garen\n";
                }
                else // No tiene espada
                {
                    std::cout << " Tu personaje es.... Darius\n";
                }
            }
            else//No Es hombre
            {
                std::cout << " Tu personaje es.... Tristana\n";
            }
        }
    }
}