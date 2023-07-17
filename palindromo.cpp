#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool esPalindromo(const std::string& cadena) {
  std::string copia = cadena;
  std::transform(copia.begin(), copia.end(), copia.begin(), ::tolower);
  std::string reversa(copia.rbegin(), copia.rend());
  return copia == reversa;
}

int main() {
  std::string cadena;
  std::cout << "Ingrese una cadena de texto: ";
  std::getline(std::cin, cadena);
  
  if (esPalindromo(cadena)) {
    std::cout << "La cadena es un palindromo." << std::endl;
  } else {
    std::cout << "La cadena no es un palindromo." << std::endl;
  }
  
  return 0;
}

