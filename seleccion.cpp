#include <iostream>

using namespace std;

void intercambiar(int* p1,int* p2)
{
    int aux=*(p1);
    *(p1)=*(p2);
    *(p2)=aux;
}

void print(int* p,int tam)
{
    for(int i=0;i<tam;i++)
    {
        cout<<*(p+i)<<" ";
    }
}

void seleccion(int* p, int tam)
{
    for(int i=0;i<tam-1;i++)
    {
        int mini=i;
        for(int j=i+1;j<tam;j++)
        {
            if(*(p+j)<*(p+mini))
            {
                mini=j;
            }
        }
        if(mini!=i)
        {
            intercambiar(p+i,p+mini);
        }
    }
    print(p,tam);
}

int main()
{
    int i[]={10,4,6,8,5,7,1,3,2,9,11};
    int tam=sizeof(i)/sizeof(i[0]);
    seleccion(i,tam);
    return 0;
}
