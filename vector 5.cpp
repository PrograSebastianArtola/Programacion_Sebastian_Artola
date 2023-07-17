#include <iostream>

const int filas = 5;
const int columnas = 5;

int main() {
    int matriz[filas][columnas];

    // Ingresar valores en la matriz
    std::cout << "Ingrese los numeros en la matriz 5x5:" << std::endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cin >> matriz[i][j];
        }
    }

    // Calcular la suma de cada fila y encontrar la fila con la mayor suma
    int sumaMayor = 0;
    int filaMayor = -1;

    std::cout << "Suma de cada fila:" << std::endl;
    for (int i = 0; i < filas; i++) {
        int sumaFila = 0;
        for (int j = 0; j < columnas; j++) {
            sumaFila += matriz[i][j];
        }

        std::cout << "Fila " << i + 1 << ": " << sumaFila << std::endl;

        if (sumaFila > sumaMayor) {
            sumaMayor = sumaFila;
            filaMayor = i;
        }
    }

    std::cout << std::endl;
    std::cout << "La fila con la mayor suma es la Fila " << filaMayor + 1 << " con una suma de " << sumaMayor << " puntos." << std::endl;

    return 0;
}

