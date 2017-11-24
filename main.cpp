#include <iostream>
#include <vector>


using namespace std;

class Node{
public:
	int value;
	Node *next;
	Node(int val, Node *sigue){
		this->value = val;
		this->next = sigue;
	}
};
typedef Node *linked

int main()
{
    int i, n=atoi()
    linked sigue=new Node(1,NULL);
    sigue->next=sigue;
    linked val = sigue;
    for(i=2;i<=n;i++)
    {
        val=(val->next=new Node(1,sigue));
    }
    cout<<"mueren";
    while(val!=val->next)
    {
        for(i=1;i<k;i++)
        {
            val=val->next;
        }
        sigue=val->next;
        val->next=sigue->next;
    }
    return 0;
}
