#ifndef __Cola_max_H__
#define __Cola_max_H__

#include <stack>

struct Celda_cola{
    int valor;
    int maximo;
};

class Cola_max{
private:
    std::stack<Celda_cola> pila1, pila2;
    int max;
    
    void actualizar_max();
    
public:  
    Cola_max()=default;
    
    Cola_max(Cola_max & otra);
    
    ~Cola_max() = default;
    
    Cola_max & operator=(const Cola_max & otro);

    bool vacia() const;

    void poner(const int elemento);

    void quitar();

    Celda_cola frente() const;
    
    int num_elementos() const;
};

#endif // __Cola_max_H__

