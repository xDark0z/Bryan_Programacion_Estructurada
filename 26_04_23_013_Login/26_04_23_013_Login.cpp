#include <iostream>
#include <locale.h>
#include <string> 

int main()
{
    bool aux = true;
    std::string name;
    std::string nameU = "Dad1";
    std::string contra;
    std::string contraU = "123";

    while (aux)//Mientras que la evaluación sea verdadera se ejecutara lo que esta dentro
    {
        std::cout << "hola Cual es tu nombre? \n";
        getline(std::cin, name);
        if (name == nameU)//Si el nombre ingresado y el guardado son iguales dar bienvenida
        {
            std::cout << "bienvenido de vuelta " << name << " \n";
            std::cout << "Para confirmar que eres tu ingresa tu contraseña: \n";
            getline(std::cin, contra);
            if (contra == contraU)//Si el nombre es bueno entonces solicitar contraseña
            {
                std::cout << "pero cuanto gusto de volverte a ver\n";
                system("pause");
            }
            else //Si el usuario se equivoca en la contraseña repite todo el proceso
            {
                std::cout << "Que se me hace que no eres tu \n";
                system("pause");
            }
        }
        else //Si no son iguales darle una patada
        {
            std::cout << "Saquese no lo conozco " << std::endl;
            system("pause");
        }
        system("cls");
    }
}



