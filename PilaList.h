#ifndef PILALIST_H_
#define PILALIST_H_

#include "Lista.h"

template <class elemento>
class PilaList : protected Lista<elemento>
{
public:	
	bool esvacia();
	void apilar(elemento e);
	void desapilar();
	elemento tope();	
};

template <class elemento>
bool PilaList<elemento>::esvacia()
{
	return Lista<elemento>::esvacia();
}

template <class elemento>
void PilaList<elemento>::apilar(elemento e)
{
	this->insertar(1, e);
}

template <class elemento>
void PilaList<elemento>::desapilar()
{
	this->eliminar(1);
}

template <class elemento>
elemento PilaList<elemento>::tope()
{
	return this->consultar(1);
}

#endif /*PILALIST_H_*/

