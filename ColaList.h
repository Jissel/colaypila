#ifndef COLALIST_H_
#define COLALIST_H_

#include "Lista.h"

template <class elemento>
class ColaList : Lista<elemento>
{
public:
	bool esvacia();
	void encolar(elemento e);
	void desencolar();
	elemento frente();
};

template <class elemento>
bool ColaList<elemento>::esvacia()
{
	return Lista<elemento>::esvacia();
}

template <class elemento>
void ColaList<elemento>::encolar(elemento e){
	this->insertar(this->longitud() + 1, e);
}

template <class elemento>
void ColaList<elemento>::desencolar()
{
	this->eliminar(1);
}

template <class elemento>
elemento ColaList<elemento>::frente()
{
	return this->consultar(1);
}

#endif /*COLALIST_H_*/

