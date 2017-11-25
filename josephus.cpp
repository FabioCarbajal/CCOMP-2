#include <iostream>
using namespace std;

class Node{
public:
	int value;
	Node *next;
	Node(int val = 0, Node *sigue = NULL){
		this->value = val;
		this->next = sigue;
	}
	
	
	/*Node *newNode(int data)
	{
		Node *temp = new Node;
		temp->next = temp;
		temp->data = data;
	}*/
	
};


class CircularLL{
public:
	Node *head;
	Node *tail;
	CircularLL(){
		this->head = NULL;
	}
	
	Node *buscar(int val){
		Node *temp = head;
		while(temp->next != head && temp->next->value < val){ //recorrer la lista buscando el nodo
			temp = temp->next; // BUSCAR 
		}
		return temp; 
	}
	
	void insertar(int val){
		Node* temp2 = new Node(val);
		if (head == NULL){
			head = temp2;
			head->next = head;
			tail = head;
			return;
		}
		
		Node *temp = buscar(val);
		
		if(temp == head){ 
			if(val < temp->value ){//Insertando antes de la cabeza
				temp = tail;
				Node *aux = temp->next; // antigua cabeza
				head = temp2;
				head->next = aux;
			}
			else{//Insertando despues de la cabeza
				if(temp->next == head){//solo hay un elemento
					tail = temp2;
				}
				Node *aux = temp->next; // lo que sigue a la cabeza
				head->next = temp2;
				temp2->next = aux;
			}
			tail->next = head;
			//return;
		}
		
		else if(temp==tail){ // Insertando al final
			temp->next = temp2;
			tail = temp2;
			tail->next = head;
			//return;
		}
		
		else{ // Insertando al medio
			temp2->next = temp->next;
			temp->next = temp2;
			tail->next = head;
			//return;
		}
	}
	
	
	void borrar(int val){
		cout<<"Borrando: "<<val<<endl;
		cout<<endl;
		if (head == tail && head->value==val){
			head = NULL;
			tail = NULL;
			delete head;
			delete tail;
			return;
		}
		
		Node *temp = buscar(val);
		
		
		if(temp->value== val && temp==head){//inicio
			head = temp->next;
			delete temp;
			tail->next = head;
			
		}
		
		else if(temp->next==tail){//borrado al final
			Node *aux = temp->next->next;
			delete temp->next;
			tail=temp;
			tail->next=head;
			
		}
		else if(temp->next->value==val){//despues
			Node *aux = temp->next;
			temp->next = temp->next->next;
			delete aux;
			tail->next= head;
		}
	}
	
	
	void print(){
		
		Node *temp = head;
		Node *aux = temp->next;
		
		while(aux != head){
			aux = temp->next;
			cout << "  "<<temp->value; //<<"      Dirección : "<<temp<< "         Next: "<<temp->next<< endl;
			temp = aux;
			
		}
		if(temp->next == head){ //Un elemento
			cout << "  "<<head->value; //<<"      Dirección : "<<head<< "         Next: "<<head->next<< endl;
			
		}
		cout<<endl;
	}

	/*void JosephusPosition(int m, int n)
	{
		Node *head = newNode(1);
		Node *prev = head;
		for (int i = 2; i <= n; i++)
		{
			prev->next = newNode(i);
			prev = prev->next;
		}
		prev->next = head;
		
		Node *ptr1 = head, *ptr2 = head;
		while (ptr1->next != ptr1)
		{
			int count = 1;
			while (count != m)
			{
				ptr2 = ptr1;
				ptr1 = ptr1->next;
				count++;
			}
			ptr2->next = ptr1->next;
			ptr1 = ptr2->next;
		}
		
		cout<<"Last person left standing(Josephus Position) is "<< ptr1->data;
	}*/
};

int main(int argc, char *argv[]) {
	CircularLL Jaz;
	Jaz.insertar(9);
	Jaz.insertar(2);
	Jaz.insertar(10);
	Jaz.insertar(5);
	Jaz.insertar(4);
	Jaz.print();	
	
	if(Jaz.head != NULL){
		Jaz.print();}
	else{
		cout<<"Lista Vacía"<<endl;
	}
	
	return 0;
}
