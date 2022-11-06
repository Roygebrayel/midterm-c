#include <iostream>
using namespace std;



int product(int a, int b)
{
    int sum = 0;
    for (int I = 0; I < b; I++)
    {
        sum += a;
    }
    return sum;
}

int main (void){
    int n=10,v=20;
    cout<<product(n,v);
}