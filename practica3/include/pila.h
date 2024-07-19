#ifndef __Pila_H__
#define __Pila_H__

#include <cassert>

template <class T>
class Pila{
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
    int num_elem;

  public:
    Pila(): primera(0), num_elem(0){
    }

    Pila(const Pila<T> & otra);

    ~Pila();

    Pila& operator= (const Pila<T>& otra);

    bool vacia() const{
      return (primera==0);
    }

    T& tope (){
      assert(primera!=0);
      return primera->elemento;
    }

    const T & tope () const{
      assert(primera!=0);
      return primera->elemento;
    }

    void poner(const T & elem);

    void quitar();

    int num_elementos() const{
      return num_elem;
    }
};

#include <../src/pila.cpp>

#endif // __Pila_H__
