#include<iostream>
using namespace std;

int main(){
	int matriz[4][4]; // Matriz de 4 filas y 4 columnas
	int suma=0;
	
	// Ingreso de los valores de la matriz
	for(int i=0;i<4;i++){
		
	cout<<"Ingrese el numero"<<i+1<<":";	
		cin>>matriz[i][0];

	}
	
	//Suma de los valores de la matriz
	for(int i=0;i<4;i++){
		suma+=matriz[i][0];
		
	}
	
	// Mostrar el resultado
	cout<<"la suma de los valores ingresados es:"<<suma<<endl;
	
	return 0;
}
