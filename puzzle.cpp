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
        case 80:
            i=*A-(b+4);
            break;
        case 77:
            j=*B-(a+1);
            break;
        case 75:
            j=*B-(a-1);
            break;
        }
    }
}

int main()
{
    int M[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
    int (*A)[4]=M;
    int (*B)[4]=M;
    int *a=*A;
    int *b=*B;
    int i,j;
    for(int q=0;<4;q++){
        for(int p=0;p<4;p++){
            cout<<*M;
        }
        cout<<endl;
    }
    return 0;
}
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//   int M[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
//   int (*A)[4] = M;
//   int (*a)[4] = A;
//   int *B, *b;
//   int i,j;
//
//   A++;
//   B=*A;
//   b=B;
//   B+=2;
//
//   cout<<*B<<endl;
//
//   i =  A-a;
//   j = B - b;
//
//    cout<<i<<","<<j<<endl;
//
//    B = b;
//    B += 5;
//
//    cout<<*B<<endl;
//
//    return 0;
//}
