#include <iostream>
using namespace std;

int fct(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j+=2)
        {
            sum++;
            if (j % 2 == 1)
            {
                break;
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