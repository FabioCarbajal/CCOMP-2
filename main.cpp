#include <iostream>

using namespace std;

int main()
{
    for(int i=2;i<=1000;i++){
        int a=0;
        for(int j=1;j<=1000;j++){
            if(i%j==0)
                a++;
        }
        if(a==2){
            cout<< " " <<i;
        }
    }
    return 0;
}
