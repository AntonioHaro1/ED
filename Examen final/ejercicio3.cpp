#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include "bintree.h"

using namespace std;

list<float> promedio(vector<float,int> V){
    
    list<float> L;
    list<float>::iterator L1=L.begin();
    vector<float,int>::iterator itv=V.begin();
    int level=0;
    int suma=0;
    int contador=0;
    
    //hago los promedios comparandolos con su nivel
    
    while(itv!=V.end()){
        //si tienen el mismo level sumalos 
        if(itv->second==level){
            suma+= itv->first;
            contador++;
            itv++;
            //cuando este else se da significa que ya esta en otro level entonces hacemos promedio e insertamos
            //en L y ponemos todo de vuelta a 0 para comenzar otra vez
        }else{
            suma=(suma/contador);
            L.insert(L1,suma);
            L1++;
            suma=0;
            level++;
            contador=0;
        }
        
    }
    
    return L;    
    
}

void prom_nivel(bintree<int> &T,list<float> &P){
    
    queue<bintree<int>::node,int> q,qaux;
    pair<bintree<int>::node,int> A;
    pair<bintree<int>::node,int> Aaux;
    vector<float,int> P2;
    
    
    q.push(T.root(),0);
    qaux.push(T.root(),0);
    
    
    
    while(!q.empty){
        
        A= q.front();
        q.pop();
        
        //guardo todos los nodos en qaux con su nivel para luego
        //hacer el promedio
        
        if(!A.first.left.null()){
            Aaux.first=A.first.left();
            Aaux.second=A.second+1;
            qaux.push(Aaux);
            q.push(Aaux);
        }
        if(!A.first.right.null()){
             Aaux.first=A.first.left();
            Aaux.second=A.second+1;
            qaux.push(Aaux);
            q.push(Aaux);
        }
    }
    
    //traspaso los datos a un vector 
    //me di cuenta que en realidad no hace falta y se podria hacer promedio con queue pero no me da tiempo
    while(!qaux){
        pair<float,int> elem;
        elem.first=*(qaux.front().first);
        elem.second=qaux.front().second;
        P2.push_front(qaux.front());
        qaux.pop();
    }
    //uso promedio
    P = promedio(P2);
}