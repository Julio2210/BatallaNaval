#include <iostream>

using namespace std;

void Matrices(char matriz1[][10]) {							// Inicio de la matriz para imprimir el tablero
	const int x = 10, y = 10;
	char matriz[x][y] =
					{ {'b','O','O','O','O','O','O','O','O','O'},
				    {'O','O','O','O','O','o','O','O','O','O'},
					{'O','O','O','O','O','O','O','O','O','O'},
					{'O','O','O','O','o','O','O','O','O','O'},
					{'O','O','O','O','O','O','O','O','O','O'},
					{'O','O','B','O','O','O','O','O','O','O'},
					{'O','O','O','O','O','O','O','O','O','O'},
					{'O','O','O','O','b','O','O','O','O','O'},
					{'O','O','O','O','O','O','B','O','O','O'},
					{'O','O','O','O','O','O','O','O','O','O'} };
	
}

void imprimirMatriz(char matriz[][10])     //En esta parte lo que se hace es crear la funcion para imprimir el tablero
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{                                                     //En esta parte del for se indican los pasos que debe seguir para que la matriz salga bien..... pero mi tablero no sale bien :c
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}



int main()
{
	
	char matriz[10][10];                            // En esta parte se manda llamar a imprimirMatriz para que el tablero salga en pantalla 
	cout << endl;
	cout << "TABLERO" << endl;
	imprimirMatriz(matriz);
	
	
	//Se inician las condiciopnales para que si se escriba una coordenada este le indique si a acertado el tiro o no

	int coordenada;
	cout << "Introduce una coordenada: ";
	cin >> coordenada;
	if (coordenada = 1, 1) {
		cout << "Barco Destruido";
		
	}
	if (coordenada = 3, 6) {
		cout << "Barco Destuido"; 
		
	}
	if (coordenada = 5, 7) {
		cout << "Barco Destruido";
	}
	if (coordenada = 9, 7) {
		cout << "Barco Destruido";
	}
	else {
		cout << "Has fallado";
		return 0;
	}
	return 0;
 }



/*No sirve mi programa porque el tablero no sale como esperaba 
 y pase todo el lunes tratando de resolverlo pero no pude :c*/