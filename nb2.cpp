#include <iostream>
using namespace std;




static int power(int a, int b)

{
    if (b < 0)
        return a;
    if (b == 0)
        return 1;
    int sum = a;
    for (int I = 0; I < b - 1; I++)
    {
        sum *= a;
    }
    return sum;
}

int main (void){
    int n=2,v=5;
    cout<<power(n,v);
}