#include <iostream>
#include <stdlib.h>
#include "Nodo.h"
#include "Lista.h"
#include "Cola.h"
#include "Pila.h"
#include "ColaList.h"


using namespace std;
 
int main(int argc, char *argv[])
{	
    char pausa;
    Lista<int> l1,aux;
    Pila<int> pi1;
    Cola<int> col;
	
	l1.insertar(1, 10);
	l1.insertar(2, 1150);
	l1.insertar(3, 14);
	pi1.apilar(15);
	pi1.apilar(16);
	col.encolar(156);
	col.encolar(45);

	cout << l1.localizar(3) << endl;
  
	
 	cout <<"\nLa longitud es:  "<<l1.longitud( ) << endl;
 	cout <<"\nEl tope de la pila  es:\n  \n"<< pi1.tope( )<<endl;
	Pila<int> y(pi1);
	cout <<"\nel tope de la pila y es :  "<<y.tope( ) << endl;
	y.desapilar();
	cout <<"\ndesapile tope pi1 es "<<pi1.tope( ) << endl;
	cout <<"\nel tope de y es "<<y.tope( ) << endl;

	//l1.vaciar();
	Lista<int> x(l1);
	cout <<"\nLa longitud de x es:  "<<x.longitud( ) << endl;
	x.eliminar(1);
	cout <<"\nelimine pos 1  longitud de l1 "<<l1.longitud( ) << endl;
	cout <<"\nLa longitud de x es:  "<<x.longitud( ) << endl;

	Cola<int> z(col);
	cout <<"\nel frente de la cola es :  "<<z.frente( ) << endl;
	z.desencolar();
	cout <<"\ndesencole frente col es "<<col.frente( ) << endl;
	cout <<"\nel frente de z es "<<z.frente( ) << endl;

	return EXIT_SUCCESS;
}
