// 2023_04_17_006_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>

int main()
{

    int num_batallas;
    int batallas_f;
    int batallas_sf;
    int batallas_grupos;
    int Num_Luchadores = 0;
    int opc = 0;
    int rondas_ed = 0;
    while (true) {
        std::cout << "Hola ,Cuantos peleadores compiten hoy ?? \n";
        std::cin >> Num_Luchadores;
        std::cout << "Sera un desmadre epico si peleamos " << Num_Luchadores << " peleadores espero todos tengan un gran nivel\n";
        std::cout << "Ahora dime como pelearemos?\n1.- Royal Rumble \n2.-Eliminatoria directa \n3.-Grupos, semifinal y final \n4.-salir\n";
        std::cin >> opc;
        switch (opc)
        {
        case 1://RR
            num_batallas = Num_Luchadores - 1;
            break;

        case 2://ED
            while (Num_Luchadores > 1) {

                Num_Luchadores = Num_Luchadores / 2;
                rondas_ed++;
                num_batallas = pow(2, rondas_ed) - 1;

            }
            break;
        case 3://GSF
            int grupos;
            if (Num_Luchadores % 2 == 0)
            {
                grupos = Num_Luchadores / 2;
            }
            else
            {
                grupos = (Num_Luchadores / 2) + 1;
            }
            {
                batallas_grupos = (grupos * (grupos - 1)) / 2;
                batallas_sf = grupos;
                batallas_f = 1;
                num_batallas = batallas_grupos + batallas_sf + batallas_f;
            }
            break;
        case 4:
            return EXIT_SUCCESS;
            break;
        default:
            std::cout << "Lo lamento no hay opción correcta" << std::endl;
            break;
            return 0;

        }

        std::cout << " se necesitaran " << num_batallas << "batallas para obtener a un ganador." << std::endl;

    }
    return 0;

}











