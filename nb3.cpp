#include <iostream>
using namespace std;

int mod(int a, int b)
{
    if (b <= a)
        return -1;
    int div = a / b;
    return a - div * b;
}

int main (void){
    int n=2,v=5;
    cout<<mod(n,v);
}