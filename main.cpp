#include "Ufunciones.h"

int main()
{Entero n;
  srand(time(nullptr));
  cout << "N : "; cin>>n;
  vector<Entero>v(n);
  crear(v);
  imprimir(v);
  cout <<"\nSe elimina \n";
  eliminarMultiplo(v,3);
  imprimir(v);
  return 0;
}