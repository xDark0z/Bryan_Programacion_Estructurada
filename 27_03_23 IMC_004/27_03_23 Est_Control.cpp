// 27_03_23 Est_Control.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Bryan Alejandro Alamillo Betancourt
// Repaso del tema in/out
#include <iostream>

int main()
{
    int peso = 0;
    float IMC = 0;
    std::string Nombre;
    std::string Nombreuno;
        bool enfermedad1 = false;
        bool enfermedad2 = false;
        bool enfermedad3 = false;
    float estatura = 0;
    std::string Apellidos;
    std::string Apellidosdos;
    char sexo[2];
    float resIMC = 0;

    
    std::cout << "Hola Usuario, Bienvenido al calculador de IMC \n";
    std::cout << "Le pediremos, su peso y estatura, a continuacion y en caso de ternerlo anotar 0 para no y 1 para si, en enfermedades mortiferas \n";

    std::cout << "Escriba su primer nombre :\n";
    std::cin >> Nombre;
    std::cout << "Escriba su segundo nombre en caso de tener :\n";
    std::cin >> Nombreuno;
    std::cout << "Escriba su Apellido :\n";
    std::cin >> Apellidos;
    std::cout << "Escriba su segundo Apellido :\n";
    std::cin >> Apellidosdos;
    std::cout << "Le Preguntaremos algunas enfermedades :\n";
    std::cout << "Tiene diabetes 0/1?: \n";
    std::cin >> enfermedad1;
    std::cout << "Tiene hipertension 0/1?: \n";
    std::cin >> enfermedad2;
    std::cout << "Tiene sida 0/1?: \n";
    std::cin >> enfermedad3;
    std::cout << "Que sexo eres M/F? : \n";
    std::cin >> sexo;
    std::cout << "Cuanto pesas? : \n";
    std::cin >> peso;
    std::cout << "Cuanto mides? :\n";
    std::cin >> estatura;
    
    std::cout << "Asi que tu nombre es: " << Nombre << " " << Nombreuno << std::endl;
    
    resIMC= peso / (estatura * estatura);
    std::cout << "Tu IMC es: " << resIMC;



}


