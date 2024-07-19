#ifndef PALABRAS_H
#define PALABRAS_H
using namespace std;

const int MAX = 25;

void UnionConjuntos(const char set1[],int tamanio1 ,const char set2[],int tamanio2 ,char unionSet[],int & tamanioU);

void InterseccionConjuntos(const char set1[],int tamanio1 ,const char set2[],int tamanio2 ,char InterSet[],int & tamanioI);

double CoeficienteArcimboldo(const char set1[],int tamanio1, const char set2[], int tamanio2);


#endif /* PALABRAS_H */