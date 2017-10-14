#include <iostream>
#include <string>

using namespace std;

void comparacion(char *a,char* b)
{
    while((*a!='\0') && (*b!='\0'))
    {
        if(*a>*b)
        {
            cout<<"mayor";
            break;
        }
        if(*a<*b)
        {
            cout<<"menor";
            break;
        }
        if(*a==*b)
        {
            a++;
            b++;
        }
    }
    if(*a=='\n' && *b=='\n')
    {

    }
}

int main()
{
    string a,b;
    char* p;
    char* p1;
    cout<<"Primera palabra: ";
    cin>> a;
    p=(char*) a.c_str();
    cout<<"Segunda Palabra: ";
    cin>> b;
    p1=(char*) b.c_str();
    comparacion(p,p1);
    return 0;
}
