#include <iostream>

void ordenarAscendente(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambiar elementos si están desordenados
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ordenarDescendente(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Intercambiar elementos si están desordenados
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int size = 10;
    int numeros[size];

    // Ingresar 10 números en el primer vector
    std::cout << "Ingrese 10 numeros:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> numeros[i];
    }

    // Mostrar el vector original
    std::cout << "Vector original:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    // Ordenar el segundo vector de menor a mayor
    ordenarAscendente(numeros, size);

    // Mostrar el vector ordenado de menor a mayor
    std::cout << "Vector ordenado de menor a mayor:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    // Ordenar el tercer vector de mayor a menor
    ordenarDescendente(numeros, size);

    // Mostrar el vector ordenado de mayor a menor
    std::cout << "Vector ordenado de mayor a menor:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

