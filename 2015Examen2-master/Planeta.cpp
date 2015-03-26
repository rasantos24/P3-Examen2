#include "Planeta.h"

Planeta::Planeta(string nombre, int habitantes, double diametro, char categoria)
{
    this->nombre = nombre;
    this->habitantes = habitantes;
    this->diametro = diametro;
    this->categoria = categoria;
}

Planeta::~Planeta()
{
    //dtor
}
