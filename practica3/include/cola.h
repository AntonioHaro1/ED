#ifndef __Cola_H__
#define __Cola_H__

#include <cassert>

template <class T>
class Cola{
	
  private:
    struct Celda {       
      T elemento;
      Celda * siguiente;

      Celda() : siguiente(0){
      }

      Celda(const T & elem, Celda * sig): elemento(elem), siguiente(sig){
      }
    };

    Celda * primera;
    Celda * ultima;
    int num_elem;
    
  public:
    Cola(): primera(0), ultima(0), num_elem(0){
    }

    Cola(const Cola<T> & original);

    ~Cola();

    Cola& operator= (const Cola<T> & otra);

    bool vacia() const{
      return num_elem==0;
    }

    T& frente (){
      assert(primera!=0);
      return primera->elemento;
    }

    const T & frente () const{
      assert(primera!=0);
      return primera->elemento;
    }

    void poner(const T & elem);

    void quitar();

    int num_elementos() const{ 
      return num_elem; 
    }
};

#include <../src/cola.cpp>

#endif // __Cola_H__
