#include <iostream>
#include <locale.h>
#include <string> 

int main()
{
    bool aux = true;
    std::string name;
    std::string nameU = "1";
    std::string contra;
    std::string contraU = "123";

    while (aux)//Mientras que la evaluación sea verdadera se ejecutara lo que esta dentro
    {
        std::cout << "hola Cual es tu usuario? \n";
        getline(std::cin, name);
        if (name == nameU)//Si el nombre ingresado y el guardado son iguales dar bienvenida
        {
            std::cout << "Hola de nuevo " << name << " \n";
            std::cout << "Para confirmar que eres tu ingresa tu contraseña de usuario: \n";
            getline(std::cin, contra);
            if (contra == contraU)//Si el nombre es bueno entonces solicitar contraseña
            {
                std::cout << "que pasa bro, cuanto tiempo\n";
                system("pause");
            }
            else //Si el usuario se equivoca en la contraseña repite todo el proceso
            {
                std::cout << "quien osa invadir la cueva del admin \n";
                system("pause");
            }
        }
        else //Si no son iguales darle una patada
        {
            std::cout << "Saquese bro, no eres digno de ser admin " << std::endl;
            system("pause");
        }
        system("cls");
    }
}



