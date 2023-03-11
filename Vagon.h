/*
  Archivo: Vagon.h
  Autor: Juan Esteban Clavijo García
  Email: juan.esteban.clavijo@correounivalle.edu.co
  Fecha creación: 2022-12-05
  Fecha última modificación: 2022-12-10
  Versión: 0.1
*/

/**
  CLASE: Vagon
  INTENCIÓN: Estoy modelando un vagón con un número y que transporta enfermos o no. Se le puede pedir que me diga cuál es su número y también se le puede preguntar si tiene pasajeros enfermos.
  RELACIONES: Ninguna
*/

#include <string>
using namespace std;

#ifndef HH_VAGON
#define HH_VAGON

class Vagon
{
  private:
  int numero;
  bool transporta_enfermos;

  public:
  /**
  Constructor: Construye un vagón con un número y si transporta pasajeros enfermos o no.
  */
  Vagon(int numero, bool transporta_enfermos);
  /**
  Destructor: No hace nada.
  */
  virtual ~Vagon();
  /**
  Pregunta y retorna el numero del Vagon.
  */
  virtual string cual_es_el_numero();
  /**
  Mira si el vagón tiene pasajeros enfermos.
  true = sí; false = no.
  */
  virtual bool tiene_pasajeros_enfermos();
};

#else
class Vagon;
#endif
