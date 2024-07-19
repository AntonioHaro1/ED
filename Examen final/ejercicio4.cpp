#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool parejasinset(vector<set<int>> &sw, int n){
    
    vector<set<int>>::iterator it1;
    set<int>::iterator aux,aux2;
    it1=sw.begin();
    bool encontrada=false;

    
    for(int i=0; i<n ; i++){
        
        for(int j=0; j<n ; j++){
            
            encontrada=false;
            
            //busca la combinacion i,j en todos los set
            for(it1=sw.begin();it1!=sw.end();it1++){
                
                aux=(*it1).find(j);
                aux2=(*it1).find(i);
                //
                if(aux!=(*it1).end() && aux2!=(*it1).end()){
                    encontrada=true;
                }
            }
             //si no se cumple esta condicion en ningun momento 
                //significa que en ningun set se ha encontrado
            if(!encontrada)
                return false;
        }
    }
    
    return true;
    
}