#include <iostream>
#include <vector>
using namespace std;

template <class T>

class nodo{
public:
	T value;
	nodo *next;
	
	nodo();
	nodo(T);
	~nodo();
	
	nodo()
	{
		value=NULL;
		next=NULL;
	}
	
	nodo(T valor)
	{
		value=valor;
		next=NULL;
	}
	void print(){
		cout<<value;
	}
	
	~nodo()
	{
		value=0;
		next=NULL;
		delete nodo;
	}
};

typedef class nodo *T;

void insertInicio(T &lista, int valor)
{
	T q;
	q=new nodo;
	q->value=valor;
	q->next=lista;
	lista=q;
}

void insertElemento(T &lista, int valor, int pos)
{
	T q,t;
	int i;
	q=new nodo;
	q->value=valor;
	
	if(pos==1)
	{
		q->next=lista;
		lista=q;
		
	}
}

void print()
{
	int i=0;
	
	while(lista != NULL)
	{
		cout<<' '<<i+1<<") "<<lista->value<<endl;
		lista=lista->next;
		i++;
	}
}

void menu()
{
	cout<<"1.Insertar al Inicio"<<endl;
	cout<<"2.Insertar al Final"<<endl;
	cout<<"3.Insertar en posicion"<<endl;
	cout<<"4.Buscar Elemento"<<endl;
	cout<<"5.Eliminar Elemento"<<endl;
	
	cout<<"Ingrese Opcion: ";
}

int main() 
{
	T lista=NULL;
	int opcion;
	int elem;
	int pos;
	
	menu(); 
	cin>>opcion;
	
	switch(opcion)
	{
	case 1:
		cout<<"Numero a Insertar: ";
		cin>> elem;
		insertInicio(lista, elem);
		break;
		
	case 2:
		cout<<"Numero a Insertar: ";
		cin>> elem;
		break;
		
	case 3:
		cout<<"Numero a Insertar: ";
		cin>> elem;
		break;
		
	case 4:
		cout<<"Numero a Buscar: ";
		cin>> elem;
		break;
		
	case 5:
		cout<<"Numero a Eliminar: ";
		cin>> elem;
		break;
	}
	return 0;
}

