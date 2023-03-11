/*
  Archivo: Via.h
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-05
  Fecha última modificación: 2022-12-10
  Versión: 0.1
*/

/**
  CLASE: Via
  INTENCIÓN: Estoy modelando una via (puede ser principal o un ramal) la cual puede tener vagones. Se le puede introducir vagones, y pedirle que avancen o retrocedan desde otra via (el ramal izquierdo o desde el derecho).
  RELACIONES: conoce Vagones
*/

#include "Vagon.h"
#include <vector>
#include <string>
using namespace std;

#ifndef HH_VIA
#define HH_VIA

class Via
{
  private:
  vector<Vagon *> vagones_en_la_via;

  public:
  /**
  Constructor: Construye una via, la cual puede tener vagones en ella. Como está recién fabricada, no tiene ningún vagon.
  */
  Via();
  /**
  Destructor: Destruye los objetos dinámicos de clase Vagón creados que estén en la via.
  */
  virtual ~Via();
  /**
  Introduce el vagón dado a la via, desde el final.
  */
  virtual void introducirVagon(Vagon *un_vagon);
  /**
  Si hay uno o más vagones en la via, el último lo saca de la via y lo retorna.
  */
  virtual Vagon *sacar_vagon();
  /**
  Si hay uno o más vagones en la via, se saca el último y se introduce al final de la via indicada(una_via), si no hay vagones en la via, no se hace nada.
  */
  virtual void retrocederPor(Via *una_via);
  /**
  Si hay uno o más vagones en la via indicada(una_via), se saca el último y se introduce al final de la via, si no hay vagones en la via indicada(una_via), no se hace nada.
  */
  virtual void avanzarDesde(Via *una_via);
  /**
  Retorna los números de los vagones que hay en la via.
  */
  virtual string estadoActual();
  /**
  Retorna la cantidad de vagones que la via tiene.
  */
  virtual int dimeCuantosVagonesHay();
};

#else
class Via;
#endif