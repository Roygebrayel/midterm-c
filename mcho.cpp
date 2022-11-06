#include <iostream>
using namespace std;

int fct(int n)
{
    int sum = 25;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = 1; k < n; k *= 2)
            {
                sum++;
            }
        }
    }
    return sum;
}

int main(void)
{
    int n = 10;
    cout << fct(n);
}