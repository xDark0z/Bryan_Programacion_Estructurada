#include <iostream>

int main()
{
    int pc;
    bool continuar = true;
    bool vida = true;
    int aux = 3;
    while (continuar)
    {
        std::cout << " 1- Bucle de juego infinito 2- contador de 0 al 100\n" << std::endl;
        std::cin >> pc;
        switch (pc)
        {
        case 1:
            vida = true;
            aux = 3;
            while (vida) {
                std::cout << "tienes " << aux << " vidas\n" << std::endl;
                aux = aux - 1;
                if (aux <= -1) {
                    vida = false;
                }
            }
            break;

        case 2:

            for (int i = 0; i <= 100; i++)
            {
                std::cout << "El contador va en: " << i << std::endl;
            }
            break;
        default:
            std::cout << "Esa opción no la conozco\n";
            break;

        }
        std::cout << "Deseas realizar otra opción? 0.- No 1.- Si \n";
        std::cin >> continuar;
    }
}