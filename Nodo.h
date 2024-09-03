#ifndef NODO_H_
#define NODO_H_

#include <iostream>

template <class elemento>
class Nodo
{
protected:
	elemento elem;
	Nodo<elemento> *prox;
public:
	Nodo();
	Nodo(elemento e, Nodo<elemento> *p);
	Nodo(Nodo<elemento> *p);
	Nodo(elemento e);
	~Nodo();
	Nodo<elemento>(const Nodo& a);
	
	void mod_elem(elemento e);
	void mod_prox(Nodo<elemento> *n);
	elemento cons_elem();
	Nodo<elemento> *cons_prox();
};

template <class elemento>
Nodo<elemento>::Nodo(){
	prox = NULL;
}

template <class elemento>
Nodo<elemento>::Nodo(elemento e){
	elem = e;
}

template <class elemento>
Nodo<elemento>::Nodo(elemento e, Nodo<elemento> *n)
{
	elem = e;
	prox = n;
}

template <class elemento>
Nodo<elemento>::Nodo(Nodo<elemento> *n)
{
	prox = n;
}

template <class elemento>
Nodo<elemento>::~Nodo()
{
}


template <class elemento>
Nodo<elemento>::Nodo(const Nodo& a){

        prox=a.prox;
        elem=a.elem;

}

template <class elemento>
void Nodo<elemento>::mod_elem(elemento e)
{
	elem = e;
}

template <class elemento>
void Nodo<elemento>::mod_prox(Nodo<elemento> *n)
{
	prox = n;
}

template <class elemento>
elemento Nodo<elemento>::cons_elem()
{
	return elem;
}

template <class elemento>
Nodo<elemento> *Nodo<elemento>::cons_prox()
{
	return prox;
}

#endif /*NODO_H_*/
