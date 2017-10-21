#include <iostream>
#include <conio.h>
#define ARRIBA 72
#define ABAJO 80
#define DERECHA 77
#define IZQUIERDA 75


using namespace std;

void mover(int (*M)[4], int i, int j, int (*A)[4], int (*B)[4], int *b, int *a)
{
    int key;
    while((key=getch())!=27){
        switch(key)
        {
        case 72:
            i=*A-(b-4);
            break;
//        case 80:
//            break;
//        case 77:
//            break;
//        case 75:
//            break:
        }
    }
}


int main()
{
    int M[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
    int (*A)[4]=M+3;
    int (*B)[4]=M+3;
    int *a=*A;
    int *b=*B;
    int i,j;
    cout << "Hello world!" << endl;
    return 0;
}
