#include <iostream>

using namespace std;

class Node{
public:
	int value;
	Node *next;
	Node *prev;
	Node(int val = 0, Node *sigue = nullptr){
		this->value = val;
		this->next = sigue;
		this->prev = sigue;
	}
	
	void print(){
		cout<<"Value: "<<value<<endl;
	}
	
};


class Linkedlist{
public:
	Node *head;
	Linkedlist(int n){
		head= new Node(n);
		head->next = head;
		head->prev = head;

	}
	
	void insertar(int val){
		Node* temp2 = new Node(val);
		if (head == nullptr){
			head = temp2;
			head->next = head;
			head->prev = head;
			return;
		}
		Node *temp= head;
		while(temp->next != head && temp->next->value < val){ //recorrer la lista buscando el nodo
			temp = temp->next; /* BUSCAR */
		}
		if (temp->value == val) return;
		if (temp == head){
			if(head->next=head)
			{
				temp2->prev = head->prev;
				temp2->next=head;
				head->prev->next=temp2;
				head->prev = temp2;
				head=temp2;
				return;
			}
			else if (val < temp->value){
				temp2->next = temp;
				temp2->prev=head->prev;
				head->prev=temp;
				head = temp2;
				return;
			}
		} 
		temp2->next=temp;
		temp2->prev = temp->prev;
		temp->prev->next = temp2;
		temp->prev = temp2;
	}
	
	void borrar(int val){
		if (head->next == nullptr){
			//delete head;
			head = 0;
		}
		Node *temp= head;
		while(temp->next != nullptr && temp->next->value < val){ //recorrer la lista buscando el nodo
			temp = temp->next; /* BUSCAR */
		}
		//if (temp->value != val) return; 
		if (temp->value == val){
			head = temp->next;
			delete temp;
		} 
		else if (temp->next->next == nullptr){
			delete temp->next;
			temp->next = nullptr;
		} else {
			Node* temp2 = temp->next;
			temp->next = temp->next->next;
			delete temp2;
		}
	}

	void print(){
		Node *temp= head->next;
		cout<<head->value<<' ';
		while(temp != head){
			cout << temp->value << ' ';
			temp = temp->next; /* BUSCAR */
		}
		//cout << temp->value << endl;
		//cout << temp3 << endl;
	}

};
int main(int argc, char *argv[]) {
	Linkedlist Jaz(4);
	Jaz.insertar(3);
	Jaz.insertar(6);
	Jaz.insertar(5);
	Jaz.print();
	return 0;
}

