#include <iostream>


using namespace std;

void swape(int* p1,int* p2)
{
    int aux=*(p1);
    *(p1)=*(p2);
    *(p2)=aux;
}

void imp(int* i,int tam)
{
   for(int o=0;o<tam;o++)
        cout<<*(i+o)<<" ";
}

void burbuja(int* p,int tamano)
{
    bool ordenado=false;
    for(int i=0;i<tamano;i++)
        {
            for(int o=0;o<tamano-1-i;o++)
            {
                if(*(p+o)>*(p+o+1))
                {
                    swape(p+o,p+o+1);
                    ordenado=true;
                }
            }
        }
    imp(p,tamano);
}

int main()
{
    int i[]={9,8,7,10,17,1,3,2,10};
    int tam=sizeof(i)/sizeof(i[0]);
    burbuja(i,tam);
    return 0;
}
