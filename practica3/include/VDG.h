#ifndef __VDG_H__
#define __VDG_H__

template <class T>
class VectorDinamico {
public:
  VectorDinamico(int num_elem);

  ~VectorDinamico();

  int redimensionar(int num_elem);

  int dimension() const;

  T componente(int i) const;

  void asignar_componente(int i, const T & elem);

  T & operator[](int i);

 private:
  T * datos;
  int num_comp;
};

#include "../src/VDG.cpp"

#endif