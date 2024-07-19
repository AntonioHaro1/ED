#ifndef __Pila_max_Cola_H__
#define __Pila_max_Cola_H__

#include <cola.h>
#include <utility>

struct Celda_pila{
    int valor;
    int maximo;
};

class Pila_max_Cola{
private:
    Cola<Celda_pila> cola1, cola2;
    int size, max;

public:
    Pila_max_Cola();
    
    Pila_max_Cola(const Pila_max_Cola & original);

    ~Pila_max_Cola() = default;

    Pila_max_Cola & operator=(const Pila_max_Cola & otro) = default;

    bool vacia() const;

    Celda_pila & tope();

    void quitar();

    void poner(const int & elemento);

    int num_elementos() const;
};

#endif // __Pila_max_Cola_H__