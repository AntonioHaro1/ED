#ifndef __Pila_max_VD_H__
#define __Pila_max_VD_H__

#include <vector>

struct Celda_pila{
    int valor;
    int maximo;
};

class Pila_max_VD{
private:
    std::vector<Celda_pila> v;
    int max;

public:
    Pila_max_VD();

    Pila_max_VD(const Pila_max_VD & original);

    ~Pila_max_VD() = default;

    Pila_max_VD & operator=(const Pila_max_VD & otro) = default;

    bool vacia() const;

    Celda_pila & tope();
    
    void quitar();

    void poner(const int & elemento);

    int num_elementos() const;
};

#endif // __Pila_max_VD_H__