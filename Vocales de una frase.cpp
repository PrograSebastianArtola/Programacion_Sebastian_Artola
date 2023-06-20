#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string frase;
    int contador = 0;
    
    std::cout << "Ingrese una frase de 35 espacios: ";
    std::getline(std::cin, frase);
    
    // Convertir la frase a minúsculas para facilitar la comparación
    for (char& c : frase) {
        c = std::tolower(c);
    }
    
    // Contar las vocales
    for (char c : frase) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    
    std::cout << "Cantidad de vocales utilizadas: " << contador << std::endl;
    
    return 0;
}
