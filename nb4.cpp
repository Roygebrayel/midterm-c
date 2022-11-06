#include <iostream>
using namespace std;
void printSumAndProduct(int * array)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < array.length; I++)
    {
        sum += array[i];
    }
    for (int i = 0; i < array.length; i++)
    {
        product *= array[i];
    }
   cout<<product<<sum;
}

int main(void)
{
    int n[] = {2,5,6};
    cout << printSumAndProduct(n);
}