#include<iostream>
#include<vector>

using namespace std;

class matriz_sesgada{

    private:
        vector<list<int>> datos;
        int numero_de_filas,numero_de_columnas;

    public:
        matriz_sesgada(){
            datos = 0;
            numero_de_filas = 0;
            numero_de_columnas=0;
        }

        matriz_sesgada(const matriz_sesgada &otro){
            
            numero_de_filas = otro.numero_de_filas;
            vector<list<int>>::iterator it= otro.datos.begin();

            for(int i= 0 ;it != otro.datos.end(); it++, i++){

                *it = otro.datos.[i];
            }
        }

        void insertar(const list<int> & ls){

            if(ls.size() == numero_de_columnas)
                   datos.insert(ls);

        }

       

        int & operator()(int columna,int fila){

            vector<list<int>> it1=datos.begin();

            for(int i=0;i < datos.size();i++){
                
                if(i==fila){

                    list<int>::operator it2= datos[i].begin();

                    for(int j=0;it2 < datos[i].begin();it2++,j++){
                        if(columna==j)
                            return *it2;

                    }
                }

                        

            }

        }

    class iterator{
        private:
            vector<list<int>> ini,final;
        public:
            iterator()=default;

            bool operator==(conts iterator &i)const{

                return i.ini==ini;
            }

            bool operator!=(conts iterator &i)const{

                return i.ini!=ini;
            }


            list<int> & operator*(){

                    return *ini;
            }

            iterator &operator++(){
                do{
                    ini++;
                }while(ini!=fin && (ini.datos(columna,fila)%2==0))

                return *this;
            }

            friend class matriz_sesgada;

    }

    iterator begin(){
        iterator it;
        it.ini= datos.begin();
        it.fin=datos.end();
    
        if(ini!=fin && (ini.datos(columna,fila)%2==0)
            it++;
    
        return it;
    }

    iterator end(){
        iterator it;
        it.ini=datos.begin();
        it.fin=datos.end();

        return it;



    }






}