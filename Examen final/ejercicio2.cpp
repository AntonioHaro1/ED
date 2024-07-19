#include <iostream>
#include <list>

using namespace std;

bool nullsum(list<int> &L,list<int> &L2){
    list<int>::iterator it1,it2;
    
    int suma=0;
    
    for(it1=L.begin();it1!=L.end();it1++){
        
        suma=*it1;
       
        for(it2=it1++;it2!=L.end();it2++){
            suma+=*it2;
            
            //si encuentra una suma que es = 0 significa que de it1 a it2
            //hay una sequencia que cumple la condicion, insertamos y returnamos true
            if(suma==0){
                L2.insert(L2.begin(),it1,it2);
                return true;
            }
        }
        
    }
    //si llega aqui significa que nunca cumplio la condicion por lo tanto no hay ninguno
    return false;
}