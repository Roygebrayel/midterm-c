#include <iostream>
using namespace std;


int findOccurence (int number, int digit){

    int c=0;
    if(number/10==0 && number == digit){
        return c;
    }

    if(number % 10 == digit){
        c++;
    }
    return findOccurence(number/10,digit);
}
    
    









}

int main(void)
{
    int n = 16;
    cout << fct(n);
}