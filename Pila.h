#ifndef PILA_H_
#define PILA_H_

#include "Nodo.h"

template <class elemento>
class Pila
{
protected:
	Nodo<elemento> *p;
	
public:
	Pila();
	Pila(const Pila<elemento>& a);
	~Pila();	
	bool esvacia();
	elemento tope();
	void apilar(elemento e);
	void desapilar();
	void vaciar();
};


template<class elemento>
Pila<elemento>::Pila(const Pila<elemento>& a) // constructor copia

{
        Nodo<elemento> *aux,*point=a.p;
        if(a.p!=NULL)
        {
                aux=new Nodo<elemento>();
                this->p=aux;
                aux->mod_elem((point->cons_elem()));
                point=point->cons_prox();
                while(point!=NULL)
                {
                        aux->mod_prox((new Nodo<elemento>(point->cons_elem())));
                        aux=aux->cons_prox();
                        point=point->cons_prox();
                }
                aux->mod_prox(NULL);
        }
}

template <class elemento>
Pila<elemento>::Pila()
{
	p = NULL;
}

template <class elemento>
Pila<elemento>::~Pila()
{
	Nodo<elemento> *aux;
	
	while(p != NULL)
	{
		aux = p;
		p = p->cons_prox();
		delete aux;
	}	
}


template <class elemento>
bool Pila<elemento>::esvacia()
{
	return p == NULL;
}

template <class elemento>
elemento Pila<elemento>::tope()
{
	return p->cons_elem();
}

template <class elemento>
void Pila<elemento>::apilar(elemento e)
{	
	p = new Nodo<elemento>(e, p);	
}

template <class elemento>
void Pila<elemento>::desapilar()
{
	Nodo<elemento> *aux;
	
	aux = p;
	p = p->cons_prox();
	
	delete aux;
}

template <class elemento>
void Pila<elemento>::vaciar()
{
	Nodo<elemento> *aux;
	
	while(p != NULL)
	{
		aux = p;
		p = p->cons_prox();
		delete aux;
	}
}

#endif /*PILA_H_*/

