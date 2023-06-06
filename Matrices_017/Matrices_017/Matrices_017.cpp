// Matrices_017.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>

int main()
{
	
	srand(time(NULL));
	
	int mat[3][3]{};
	int mat1[5][5];
	int mat2[10][10];
	int SC = 0;

	std::cout << "Hola, seleccione el numero de matriz que guste 1) 3 2) 5 3) 10 \n";
	std::cin >> SC;

	switch (SC)
	{
	
	
	case 1:
	
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				mat[i][j] = rand() % 10;//Matriz 3
			}
		}
		
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << mat[i][j] << " ";
			}
			std::cout << std::endl;
		}
		break;
	
	case 2:

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				mat1[i][j] = rand() % 10; //Matriz 5
			}
		}

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				std::cout << mat1[i][j] << " ";
			}
			std::cout << std::endl;
		}
		break;
	
	case 3:

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				mat2[i][j] = rand() % 10; //Matriz 10
			}
		}

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				std::cout << mat2[i][j] << " ";
			}
			std::cout << std::endl;
		}
		break;
	
	
	

		}
}






