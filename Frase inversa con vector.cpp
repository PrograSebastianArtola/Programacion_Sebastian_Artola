#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> invertirFrase(const vector<string>& palabras) {
    vector<string> fraseInvertida;
    int longitud = palabras.size();
    
    for (int i = longitud - 1; i >= 0; i--) {
        fraseInvertida.push_back(palabras[i]);
    }
    
    return fraseInvertida;
}

int main() {
    string palabra;
    vector<string> palabras;
    
    cout << "Ingrese una frase (separada por espacios): ";
    while (cin >> palabra) {
