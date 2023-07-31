#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	string nombre[2]; 
	double nota[3];
	double Nsuma=0,promedio=0;
	
	for(int i=0;i<2;i++){
		cout<<"\ningrese el nombre del estudiante no."<<i+1<<": ";
		cin>>nombre[i];
		
	}
	for(int j=0;j<3;j++){
		cout<<"\ningrese la nota no."<<j+1<<": ";
		cin>>nota[j]; 
		Nsuma= Nsuma+ nota[j];

	}
	Promedio = Nsuma/3;
	cout<<"\nEl promedio es:"<<promedio
}

 cout<<"\nResultados\n";
 cout<<"Nombre\tNota1\tNota2\tNota3";
 for(int k=0;k<2;k++){
 	
 }
