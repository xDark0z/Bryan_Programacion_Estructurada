
#include <iostream>
#include <stdlib.h>


int main()
{
    while (true)
    {

        bool aux = false;
        std::cout << "Decisiones turbias.exe \n1)Para seleccionar primera opcion\n \n0)Para seleccionar segunda opcion\n" << std::endl;
        std::cout << "Te levantas, ves tu despertador y vez que faltan 30 min para iniciar clases, que haces?? \nA) Te haces tremenda pajuela para ir motivado a la escuela\nB) seguir durmiendo\n"; //iNICIO
        std::cin >> aux;

        if (aux == true) // 1A Te haces tremenda pajuela para ir motivado a la escuela
        {
            std::cout << "\nEl bro viendo que tiene tiempo limitado activa la velocidad turbo y se te tuerce la pija, que haces??\nA) Buscas hielo y lo colocas en el jr a ver que pasa\nB) Intentas reanimar al pobre intentando acomodarlo para resusitarlo *lo vez y parece pretzel morado*\n";
            std::cin >> aux;
            if (aux == true) //2A Buscas hielo y lo colocas en el jr a ver que pasa
            {
                std::cout << "\nDespues de 10 min con hielo en el jr, dado al impacto causado por la torcedura,\nvez como se te empieza a desmoronar la pija estilo pelicula Endgame de marvel, que procede bro?? \nA)observas lo que te queda de pija,te calmas y procedes a visitar a un medico plastico para salvar jr\nB) Sin jr la vida no tiene sentido, hacer la moricion es la unica opcion\n ";
                std::cin >> aux;
                if (aux == true) // 3A FINAL
                {
                    std::cout << " \nGood ending, logran reconstruir el jr,se cancela la moricion\n";
                    std::cin >> aux;

                }
                else// 4B    
                {
                    std::cout << " \nBad ending, te moriste\n";

                }
            }
            else //2B
            {
                std::cout << " \nBad ending, En un movimiento brusco lo tuerces al estilo jhon wick, mataste al jr bro\n";
            }
        
        }
       
         else //1B
        {
            std::cout << "\nchispas, te quedaste dormido mas de la cuenta y ahora son las 7:10, que procede hacer??\nA)Sin perder mas tiempo sales corriendo de la casa y aunque llegues tarde optas por no faltar\nB)Ps nimodo, mejor no voy\n ";   
            std::cin >> aux;
         
            
            if (aux == true) // 1B
            {
                std::cout << "\nEn un giro argumental, observas que hay un taxi libre, que haras??\nA)Lo dejo pasar y busco el autobus\nB)Levanto la mano para subirme al vehiculo\n";
                std::cin >> aux;
                if (aux == true) //2B
                {
                    std::cout << "\nLograste subir a un autobus pero vez que en el asiento de a lado hay una perturbacion en el ambiente\n,*un tipo sin pantalones* que haras?? \nA)Optas por cambiarte de asiento\nB)lo vez amenazantemente, y lo quieres madrear\n ";
                    std::cin >> aux;
                    if (aux == true) // 3B
                    {
                        std::cout << " \nGood ending, por tu eleccion de cambiar de asiento, evitas un conflicto y logras llegar a la escuela\n";
                        std::cin >> aux;

                    
                    }
                    else//2B.1   
                    {
                        std::cout << " \nBad ending, el vato le sabia al karate y te manda a mimir, luego te roban y te mueres por depresion\n";

                    }
                }
                else //2B.2
                {
                    std::cout << " \nBad ending, el taxista aplica la mexico momento, y te asalta\n";
            
                }
        
            }
            else //2B.1
      
                std::cout << "\nNo fuiste,asi que duermes como todo un desgraciado, despues de despertar que haras??\nA)Levantarme\nB)Nada\n";
                std::cin >> aux;
        
            }

       
        if (aux == true) // 4B
        {
            std::cout << "\nMe despierto y me pongo a jugar en el pc o no??\nA)LOL\nB)Nada\n";
            std::cin >> aux;
            if (aux == true) //4B.1
            {
                std::cout << "\nDespues de una intensa sesion de lol, que procede?? \nA)Ir a comer\nB)Seguir jugando\n ";
                std::cin >> aux;
                if (aux == true) // 4B.2
                {
                    std::cout << " \nGood ending, la comida estaba buena \n";
                    std::cin >> aux;


                }
                else// 4B    
                {
                    std::cout << " \nBad ending, por no comer en muchas horas, te dio hambre y te moriste\n";

                }
            }
            else //2B
            {
                std::cout << " \nGood ending, no jugaste lol y tu sanidad mental esta estable\n";
            }

        }

     }

  }
 
