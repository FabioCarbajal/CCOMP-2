#include <iostream>

using namespace std;

void comparacion(char* a, char* b)
{
    while((*a!='\0') && (*b!='\0'))
    {
        if(*a<*b)
        {
            cout<<"menor";
        }
        if(*a>*b)
        {
            cout<<"mayor";
            a++;
            b++;
        }
    }
}

int main()
{
    char a[5]="hola";
    char b[6]="anita";
    comparacion(a,b);
    return 0;
}
