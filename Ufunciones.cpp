//
// Created by Maria Hilda Bermejo
//

#include "Ufunciones.h"

void crear(vector<Entero> &v)
{
  for( auto iter=begin(v); iter!=end(v); iter++)
    *iter = rand()%30+1;
}

void imprimir(vector<Entero> &v)
{
  for( const auto & iter:v)
     cout << iter << "  ";
}

void   eliminarMultiplo(vector<Entero> &v,Entero multiplo)
{
  for(int i=v.size()-1; i>=0; i--)
    if(v[i]%multiplo==0 )
      v.erase(begin(v) +i);
}
