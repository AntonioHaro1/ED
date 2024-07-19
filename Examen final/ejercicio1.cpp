#include <iostream>
#include <map>
#include <set>

using namespace std;

class buscador{
    private:
        map<int,set<string>> datos;
    public:
    void insertar(int codigo,set<string> comercios){
        
        pair<int,set<string>> producto(codigo,comercios);
        datos.insert(producto);
        
    }
    
    set<string> get_comercio(int codigo){
        
        set<string> comercios;
        
        comercios = datos.find(codigo)->second;
        return comercios;
    }
    
    class iterador{
        private:
        map<int,set<string>>::iterator it,final;
        public:
        iterador()= default;
        bool operator==(const iterador &otro){
            return otro.it==it;
        }
        bool operator!=(const iterador &otro){
            return otro.it!=it;
        }
        pair<int,set<string>> operator*(){
            return   *it;
        }
        
        iterador & operator++(){
            ++it;
        }
        friend class buscador;
    };
    
    iterador begin(){
        iterador i;
        i.it=datos.begin();
        i.final=datos.end();
        
        return i;
    }
     
    iterador end(){
        iterador i;
        i.it=datos.end();
        i.final=datos.end();
        
        return i;
    }
    
    
};