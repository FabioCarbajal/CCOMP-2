#include <iostream>

using namespace std;

int modulo(int a,int b)
{
	int q=a/b;
	int r=a-q*b;
	if(r<0)
		r+=b;
	return r;
}

int main()
{
    char a;
    int b;
    int c;
    int mod;
    cout << "Ingrese el modulo a trabajar: " << endl;
    cin >> mod;
    cout << "Ingrese el primer numero a operar: "<<endl;
    cin >> b;
    cout << "Ingrese el segundo numero a operar: "<<endl;
    cin >> c;
    cout << "Ingrese un operador: " <<endl;
    cin >> a;
    if(a=='+')

        cout << "La respuesta es: " << b+c;
    if(a=='-')
        cout << "La respuesta es: " << b-c;
    if(a=='*')
        cout << "La respuesta es: " << b*c;
    if(a=='/')
        cout << "La respuesta es: " << float(b/c);
    return 0;
}

//int main()
//{
//    cout << "Hello world!" << endl;
//    return 0;
//}
