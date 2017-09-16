#include <iostream>

using namespace std;

void burbuja(int* a,int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                int aux=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=aux;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout << "[" << *(a+i) << "]";
}

int main()
{
    int n=5;
    int a[n]={6,2,1,5,4};
    burbuja(a,n);
    return 0;
}
