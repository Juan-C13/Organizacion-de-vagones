/*
  Archivo: Via.cpp
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-05
  Fecha última modificación: 2022-12-10
  Versión: 0.1
*/

#include "Via.h"

Via::Via()
{
  // No hay que hacer nada
}

Via::~Via()
{
  for (int cual_vagon = 0; cual_vagon < vagones_en_la_via.size(); cual_vagon++)
  {
    if (vagones_en_la_via.at(cual_vagon))
    {
      delete vagones_en_la_via.at(cual_vagon);
      vagones_en_la_via.at(cual_vagon) = nullptr;
    }
  }
}

void Via::introducirVagon(Vagon *un_vagon)
{
  vagones_en_la_via.push_back(un_vagon);
}

Vagon *Via::sacar_vagon()
{
  if (vagones_en_la_via.size() > 0)
  {
    Vagon *auxiliar = vagones_en_la_via.at(vagones_en_la_via.size() - 1);
    vagones_en_la_via.pop_back();

    return auxiliar;
  }
}

void Via::retrocederPor(Via *una_via)
{
  if (vagones_en_la_via.size() > 0)
  {
    una_via->introducirVagon(vagones_en_la_via.at(vagones_en_la_via.size() - 1));
    vagones_en_la_via.pop_back();
  }
}

void Via::avanzarDesde(Via *una_via)
{
  if (una_via->dimeCuantosVagonesHay() > 0)
  {
    vagones_en_la_via.push_back(una_via->sacar_vagon());
  }
}

string Via::estadoActual()
{
  string estado;

  for (int cual_vagon = 0; cual_vagon < vagones_en_la_via.size(); cual_vagon++)
  {
    estado += (vagones_en_la_via.at(cual_vagon)->cual_es_el_numero());
    if (cual_vagon < (vagones_en_la_via.size() - 1))
      estado += " ";
  }
  return estado;
}

int Via::dimeCuantosVagonesHay()
{
  return vagones_en_la_via.size();
}