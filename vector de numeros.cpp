#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    cout << "Ingrese el tamaño del vector: ";
    cin >> size;

    // Crear un vector para almacenar los datos ingresados
    vector<int> numeros(size);

    // Pedir los datos para cada posición del vector
    for (int i = 0; i < size; i++) {
        cout << "Ingrese el dato para la posición " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Imprimir el vector original
    cout << "Vector original: ";
    for (int i = 0; i < size; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Imprimir el vector en orden inverso
    cout << "Vector en orden inverso: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}



