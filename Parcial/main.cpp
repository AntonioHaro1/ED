/*
 NOMBRE Y APELLIDOS: Antonio Haro Arriaza
 GRUPO DE PRACTICAS: Martes
 EXAMEN: online
  */

#include <iostream>
#include <cstring>
#include "palabras.h"

using namespace std;


void mostrar(const char seq[], int n){
	cout << "{";
    for(int i = 0; i < n; i++)
		cout << seq[i];
		
	cout << "}" << endl;
}


void test(const char s1[], int n1, const char s2[], int n2){

    // definir variables necesarias
    // mostrar s1 y s2
    // calcular union entre s1 y s2
    // mostrar conjunto union
    //calcular interseccion entre s1 y s2
    // mostrar conjunto interseccion
    
    // mostrar tamaños de los conjunto union e interseccion
    // y el valor del coeficiente
     char union1[MAX];
	char inter2[MAX];
    int tamanioU=0;
    int tamanioI=0;
    
    mostrar(s1,n1);
    mostrar(s2,n2);

    UnionConjuntos(s1,n1,s2,n2,union1,tamanioU);
    mostrar(union1,tamanioU);

    InterseccionConjuntos(s1,n1,s2,n2,inter2,tamanioI);
    mostrar(inter2,tamanioI);

    cout <<"El tamaño de la union es "<< tamanioU << endl;
    cout <<"El tamaño de la interseccion es " << tamanioI << endl;

    float coeficiente = (float)tamanioI/ (float)tamanioU;  
    cout << "El coeficiente de ARcimboldo es "<< coeficiente <<endl;
    
}

int main(){
    char s1[MAX];
	char s2[MAX];
    string cad1, cad2;
    int n1, n2;

    cad1={"AEIOU"};
    cad2={"XIYOZ"};
    
    cout << "\nEJEMPLO 1 \n" << endl;
    //cin >> cad1;
    //cin >> cad2;
    n2 = cad2.length();
	n1 = cad1.length();
    strcpy(s1, cad1.c_str());
    strcpy(s2, cad2.c_str());
    test(s1, n1, s2, n2);


    /*cout << "\nEJEMPLO 2 \n" << endl;
    cin >> cad2;
    n2 = cad2.length();
	strcpy(s2, cad2.c_str());
    test(s1, n1, s2, n2);
	

    cout << "\nEJEMPLO 3 \n" << endl;
    cin >> cad2;
    n2 = cad2.length();
	strcpy(s2, cad2.c_str());
    test(s1, n1, s2, n2);


    cout << "\nEJEMPLO 4 \n" << endl;
    cin >> cad1;
    cin >> cad2;
    n2 = cad2.length();
	n1 = cad1.length();
    strcpy(s1, cad1.c_str());
    strcpy(s2, cad2.c_str());
    test(s1, n1, s2, n2);
    */
   
}





