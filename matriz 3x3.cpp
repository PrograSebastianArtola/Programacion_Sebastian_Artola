#include <iostream>

int main() {
    int matriz[3][3];

    // Ingresar valores en la matriz
    std::cout << "Ingrese los elementos de la matriz 3x3:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "Ingrese el elemento en la posición [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    // Mostrar la diagonal principal
    std::cout << "La diagonal principal de la matriz es: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << matriz[i][i];
        if (i < 2) {
            std::cout << ", ";
        }
    }
    std::cout << "\n";

    return 0;
}
 
