#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

bool esta_dentro_de_set(int n,const set<int> &s2){
 
    if(s2.count(n)>0)
        return true;
    return false;
}




void contar(const vector<set<int>> &v , map<int,int> &veces){

    vector<set<int>>::iterator it1,it2;
    set<int>::iterator set1;
    int aux,contador;
    

    for(it1= v.begin();it1 != v.end; it1++){


        for(set1= *it1.begin(); set1 != *it1.end(); set1++)

            contador=0;

            for(it2 = v.begin();it2 !=v.end; it++){
                
                if(esta_dentro_de_set(*set1,it2)){
                    contador++;
                }
            }
            
            
            pair<int,int> nuevo(*set1,contador);
            veces.insert(nuevo); //map ya te comprueba si esta el elemento y si ya esta no te lo inserta
        }
        }


    }







}