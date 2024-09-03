#ifndef COLA_H_
#define COLA_H_

template <class elemento>
class Cola
{
protected:
	Nodo<elemento> *inicio, *fin;
	
public:
	Cola();
    Cola(const Cola<elemento>& a);
	~Cola();
	bool esvacia();
	void encolar(elemento e);
	void desencolar();
	elemento frente();
	void vaciar();
};

	

template<class elemento>
Cola<elemento>::Cola(const Cola<elemento>& a) // constructor copia

{
        Nodo<elemento> *aux,*point=a.inicio;
        if(a.inicio!=NULL)
        {
                aux=new Nodo<elemento>();
                this->inicio=aux;
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
Cola<elemento>::Cola()
{
	inicio = fin = NULL;
}

template <class elemento>
Cola<elemento>::~Cola()
{
}

template <class elemento>
bool Cola<elemento>::esvacia()
{
	return inicio == NULL && fin == NULL;
}

template <class elemento>
void Cola<elemento>::encolar(elemento e)
{
	if(fin == NULL)
		inicio = fin = new Nodo<elemento>(e, NULL);
	else
	{
		fin->mod_prox(new Nodo<elemento>(e, NULL));
		fin = fin->cons_prox();
	}
}

template <class elemento>
void Cola<elemento>::desencolar()
{
	Nodo<elemento> *aux;
	
	aux = inicio;	
	inicio = inicio->cons_prox();
	
	if(inicio == NULL)
		fin = NULL;
	
	delete aux;
}

template <class elemento>
elemento Cola<elemento>::frente()
{
	return inicio->cons_elem();
}

template <class elemento>
void Cola<elemento>::vaciar()
{
	Nodo<elemento> *aux;
	
	while(inicio != NULL)
	{
		aux = inicio;
		inicio = inicio->cons_prox();
		delete aux;
	}
	
	fin = NULL;
}

#endif /*COLA_H_*/
