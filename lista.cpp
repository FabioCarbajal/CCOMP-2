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
	/*
	void print(){
		cout<<"Value: "<<value<<endl;
	}
	*/
};

class Linkedlist{
public:
	Node *head;
	Linkedlist(int n){
		head=nullptr;
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
		while(temp->next != head && temp->next->value < val){
			temp = temp->next; /* busca */
			//head->prev = temp;
		}
		
		if (temp->value == val) return;
		
		if (temp == head){
			if(head->next=head)
			{
				temp2->prev = head->prev;
				temp2->next=head;
				head->prev->next=temp2;
				head->prev = temp2;
				//head=temp2;
				return;
			}
			else{
				temp2->prev=temp2;
				temp2->next=temp2;
			}
			/*
			else if (val > temp->value){
				temp2->next = temp;
				temp2->prev=head->prev;
				head->prev=temp;
				head = temp2;
				return;
			}
			*/
		}
		head=temp2;
		/*
		temp2->next=temp;
		temp2->prev = temp->prev;
		temp->prev->next = temp2;
		temp->prev = temp2;
		*/
	}
	
	
	void borrar(int val){
		
		if (head->next == nullptr){
			head = nullptr;
		}
		
		Node *temp= head;
		while(temp->next != nullptr && temp->next->value < val){
			temp = temp->next;
		}
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
		Node *temp2= head->next;
		cout<<head->value<<' ';
		while(temp2 != head){
			cout << temp2->value << ' ';
			temp2 = temp2->next; /* BUSCAR */
		}
	}

};
int main(int argc, char *argv[]) {
	Linkedlist Jaz(4);
	Jaz.insertar(7);
	Jaz.insertar(9);
	//Jaz.insertar(8);
	//Jaz.insertar(5);
	//Jaz.insertar(2);
	//Jaz.borrar(3);
	//Jaz.borrar(6);
	//Jaz.borrar(7);
	Jaz.print();
	//Jaz1.print();
	return 0;
}
