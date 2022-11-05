#include <iostream>
using namespace std;

int fct(int n)
{
    int sum = 0;
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j < n; j *= 2)
        {
            for (int k = n; k >= 1; k /= 4)
            {
                sum++;
            }
        }
    }

    return sum;
}

int main(void)
{
    int n = 16;
    cout << fct(n);
}