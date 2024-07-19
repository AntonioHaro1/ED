
#include "palabras.h"
using namespace std;



void UnionConjuntos(const char set1[],int tamanio1 ,const char set2[],int tamanio2 ,char unionSet[],int & tamanioU){

    int contadorU=0;
//meto primero el array 1 dentro
   for(int i=0;i<tamanio1;i++){
       unionSet[contadorU]=set1[i];
       contadorU++;
   }


    bool encontrado;
//comparo el array2 con el que esta metido y si es diferente lo mete(para evitar repetidos)
   for(int j=0;j<tamanio2;j++){
       
       encontrado=false;
       
       for(int k=0; k<tamanio1;k++){
           if(set2[j]==set1[k])
                encontrado=true;
       }

       if(!encontrado){
            unionSet[contadorU]=set2[j];
            contadorU++;
       }
   }

    tamanioU=contadorU;

}


void InterseccionConjuntos(const char set1[],int tamanio1 ,const char set2[],int tamanio2 ,char InterSet[],int & tamanioI){

    bool encontrado;
    int contadorset=0;

//doble for para comparar set1[i] con todos los del otro set2 y si esta lo mete
    for(int i=0;i<tamanio1;i++){

        encontrado=false;

        for(int j=0;j<tamanio2 && !encontrado;j++){
            if(set1[i]==set2[j]){
                InterSet[contadorset]=set1[i];
                contadorset++;
                encontrado=true;
            }
        }
    }
    tamanioI=contadorset;

}

double CoeficienteArcimboldo(const char set1[],int tamanio1, const char set2[], int tamanio2){

    char union1[MAX];
	char inter2[MAX];
    int tamanioU=0;
    int tamanioI=0;

    UnionConjuntos(set1,tamanio1,set2,tamanio2,union1,tamanioU);
    InterseccionConjuntos(set1,tamanio1,set2,tamanio2,inter2,tamanioI);

    double coeficiente = (double)tamanioI/ (double)tamanioU; 
    return coeficiente;


}